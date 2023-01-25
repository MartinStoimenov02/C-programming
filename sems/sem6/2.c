#include<stdio.h>
#include<stdlib.h>

typedef struct{
    char name[20];
    float price;
    int id;
}product;

typedef struct{
    char address[50];
    int id;
}poruchki;

int main(){
    product pr[100];
    poruchki por[100];
    char command[10];
    int i=0, j=0, var, id_check;
    do{
        var=0;
        printf("command(Product, Order, Print, END):");
        scanf("%s", command);
        if (strcmp(command, "Product")==0){
            printf("product ID:");
            scanf("%d", &id_check);
            for(int k=0; k<i; k++){
                if(id_check==pr[k].id){
                    printf("Product with this ID already exist!\n");
                    var=1;
                    break;
                }
            }

            if(var==0){
                fflush(stdin);
                pr[i].id=id_check;
                printf("product name:");
                gets(pr[i].name);
                printf("price:");
                scanf("%f", &pr[i].price);
                i++;
            }

            for(int k=0; k<j; k++){
                if(por[k].id==pr[i-1].id){
                    printf("Client %s ordered %s\n", por[k].address, pr[i-1].name);
                    strcpy(por[k].address, "");
                    por[k].id=0;
                    j--;
                }
            }
        }

        else if(strcmp(command, "Order")==0){
            fflush(stdin);
            printf("client address:");
            gets(por[j].address);
            printf("product ID:");
            scanf("%d", &por[j].id);
            j++;
            for(int k=0; k<i; k++){
                if (por[j-1].id==pr[k].id){
                    printf("Client %s ordered %s\n", por[j-1].address, pr[k].name);
                    strcpy(por[j-1].address, "");
                    por[j-1].id=0;
                    j--;
                }
            }
        }

        else if(strcmp(command, "Print")==0){
            printf("chakashti poruchki:\n\n");
            for(int k=0; k<j; k++){
                printf("ID: %d\n", por[k].id);
                printf("Client address:");
                puts(por[k].address);
                printf("\n");
            }
        }

    }while(strcmp(command, "END")!=0);
    return 0;
}
