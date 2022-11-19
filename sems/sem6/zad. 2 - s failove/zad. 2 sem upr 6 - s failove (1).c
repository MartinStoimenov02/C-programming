#include<stdlib.h>
#include<stdio.h>

typedef struct{
    char name[20];
    float price;
    int num;
}Product;

typedef struct{
    char adres[40];
    int num;
}Order;

int main(){
    Product pr[1000];
    Order ord;
    char name[20], command[10];
    float cena;
    int nom, i=0, ch, j=0, m=0;
    FILE *prod;
    prod=fopen("products.txt", "r");
    if(prod==NULL){
        printf("error!");
        exit(1);
    }

    for(;;){
            char name[20]={0};
            for(;;){
                ch = getc(prod);
                if(ch==9){
                    break;
                }
                name[i]=ch;
                i++;
            }

        i=0;

        fscanf(prod, "%f", &cena);

        fscanf(prod, "%d", &nom);

        strcpy(pr[j].name, name);
        pr[j].price=cena;
        pr[j].num=nom;
        j++;
        ch=getc(prod);
        if(ch==EOF){break;}
        }
        fclose(prod);

    do{
        printf("command:");
        scanf("%s", command);

        if(strcmp(command, "PRINT")==0){
            j=0;
            while(pr[j].price!=0){
                j++;
            }
            for (int k=0; k<j; k++){
                printf("name: %s     ", pr[k].name);
                printf("price: %.2f lv.   ", pr[k].price);
                printf("number: %d\n", pr[k].num);
            }
        }

        else if(strcmp(command, "ADD")==0){
            if((prod=fopen("products.txt", "a"))==NULL){
                printf("error!");
                exit(1);
            }
            printf("name: ");
            scanf("%s", name);
            printf("price: ");
            scanf("%f", &cena);
            printf("number: ");
            scanf("%d", &nom);
            fprintf(prod, "\n%s\t", name);
            fprintf(prod, "%.2f\t", cena);
            fprintf(prod, "%d", nom);
            fclose(prod);
            j=0;
            while(pr[j].price!=0){
                j++;
            }
            strcpy(pr[j].name, name);
            pr[j].price=cena;
            pr[j].num=nom;
        }

    }while(strcmp(command, "END")!=0);

    return 0;
}
