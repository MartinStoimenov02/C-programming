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
    char name[20];
    float cena;
    int nom, i=0, ch, j=0;
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
            if(ch=='\t'){
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
    j=0;
    while(pr[j].price!=0){
        j++;
    }
    for (int k=0; k<j; k++){
        printf("name: %s     ", pr[k].name);
        printf("price: %.2f lv.   ", pr[k].price);
        printf("number: %d\n", pr[k].num);
    }

    fclose(prod);

    return 0;
}
