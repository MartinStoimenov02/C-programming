#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Shop
{
 char name[31];
 int ID;
 char date[11];
 double price;
};

typedef struct Shop Shop;

void addProduct(Shop element, FILE * fp, Shop *array, int *count)
{
  if(fwrite(&element,sizeof(Shop),1,fp)!=1){printf("problem with writing");}
  *count++;
  array = (Shop *)realloc(array, sizeof(Shop)*(*count));
  if(array==NULL){printf("can't resize array for products\n");return;}
  array[count-1]=element;
}

int broi=0;

Shop* f2(Shop *arr[],int count,double price)
{
   Shop *result;
   for(int i=0;i<count;i++)
   {
       if(arr[i].price>price)
       {
           broi++;
           result = (Shop*)realloc(result,sizeof(Shop)*broi);
           if(result==NULL)return NULL;
           result[broi-1]=arr[i];
       }
   }
   return result;
}


int main()
{
    FILE *fp = fopen("in.bin","wb");
    if(fp==NULL){printf("can't open file to write to\n");return 1;}
    Shop *arr;
    int countOfProducts=0;

    Shop p1;
    strcpy(p1.name,"Gosho");
    p1.ID = 123;
    strcpy(p1.date,"1992.02.04");
    p1.price=22;
    addProduct(p1,fp,arr,&countOfProducts);

    Shop *result;
    result=f2(arr,countOfProducts,33);
    for(int i=0;i<broi;i++)
    fprintf(....);
    fclose(fp);


}


void f3()
{
    FILE *fpbin = fopen("int.bin","rb");
    if(fpbin==NULL){printf("no file to open\n");}
     FILE *fptxt = fopen("outTXT.txt","w");
    if(fptxt==NULL){printf("no file to open\n");}

    while(1)
    {
        Shop temp;
        if(fread(&temp,sizeof(Shop),1,fpbin)!=1){printf("couldn't read");break;}
        fprintf(fptxt,"%s %d %s %lf\n",temp.name,temp.ID,temp.date,temp.price);
    }
    rewind(fpbin);
    fclose(fptxt);
    fptxt = fopen("outTXT.txt","r");
    while(1)
    {
        Shop temp;
        Shop temp2;
        if(fread(&temp,sizeof(Shop),1,fpbin)!=1){printf("couldn't read");break;}
        printf("binItem: %s %d %s %lf\n",temp.name,temp.ID,temp.date,temp.price);
        if(fscanf(fptxt,"%s %d %s %lf",temp2.name,temp2.ID,temp2.date,temp2.price)!=4)break;
        printf("txtItem: %s %d %s %lf\n",temp2.name,temp2.ID,temp2.date,temp2.price);
    }
}










