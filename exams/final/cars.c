#include <stdio.h>
#include<stdlib.h>

typedef struct{
    char name[36], nom[9];
    float price;
    int pr;
}Car;

int count=0;

void AddCar(Car *avto){
    fflush(stdin);
    printf("name:");
    gets(avto[count].name);
    printf("Nomer:");
    scanf("%s", avto[count].nom);
    printf("price:");
    scanf("%f", &avto[count].price);
    printf("priority:");
    scanf("%d", &avto[count].pr);
    FILE *fp;
    fp=fopen("carTxt.txt", "a");
    if(fp==NULL){printf("\nerror open txt file to write!\n");}
    fprintf(fp, "%d;%s;%s;%.2f;%d\n", strlen(avto[count].name), avto[count].name, avto[count].nom, avto[count].price, avto[count].pr);
    fclose(fp);

    FILE *bin;
    bin=fopen("cars", "ab");
    if(bin==NULL){printf("\nerror open bin file to write!\n");}
    if(fwrite(&avto[count], sizeof(avto[count]), 1, bin)!=1){printf("\nerror writing in bin file!\n");}
    fclose(bin);

    count++;
    avto=(Car*)realloc(avto, sizeof(Car)*count);
}

void Sredno(Car *avto){
    float sum, sredno;
    int br=0;
    for(int i=0; i<count; i++){
        sum+=avto[i].price;
        br++;
    }
    sredno=sum/br;
    for(int i=0; i<count; i++){
        if(avto[i].price>sredno){
            printf("%s - %.2f\n", avto[i].nom, avto[i].price);
        }
    }
}

void File(Car *avto, char *nomer){
    FILE *fbin;
    int br=0;
    fbin=fopen("cars", "rb");
    if(fbin==NULL){printf("\nerror open bin file!\n");return;}
    Car *new_auto;
    new_auto=(Car*)calloc(2, sizeof(Car));
    while(fread(&new_auto[br], sizeof(new_auto[br]), 1, fbin)==1){
        br++;
        new_auto=(Car*)realloc(new_auto, sizeof(Car)*(br*2));
    }
    fclose(fbin);
    for(int i=0; i<br; i++){
        if(strcmp(nomer, new_auto[i].nom)==0){
            printf("Bin Name: %s\nBin nomer: %s\nBin price: %.2f\nBin priority: %d\n", avto[i].name, avto[i].nom, avto[i].price, avto[i].pr);
        }
    }
    free(new_auto);
}

void Print(Car *avto, int cnt){
    for(int i=0; i<cnt; i++){
        printf("%d;%s;%s;%.2f;%d\n", strlen(avto[i].name), avto[i].name, avto[i].nom, avto[i].price, avto[i].pr);
    }
}

int main(){
    Car *avto;
    avto=(Car*)calloc(2, sizeof(Car));
    char command[10];
    do{
        printf("command:");
        scanf("%s", command);
        if(strcmp(command, "Add")==0){
            AddCar(avto);
        }
        else if(strcmp(command, "Price")==0){
            Sredno(avto);
        }
        else if(strcmp(command, "File")==0){
            char nomer[9];
            printf("nomer:");
            scanf("%s", nomer);
            File(avto, nomer);
        }
        else if(strcmp(command, "Print")==0){Print(avto, count);}
    }while(strcmp(command, "END")!=0);
    free(avto);
    return 0;
}
