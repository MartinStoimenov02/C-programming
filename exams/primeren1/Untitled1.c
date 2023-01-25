#include<stdlib.h>
#include<stdio.h>

int count=0, count_pr=0;

typedef struct{
    char name[45], country[20];
    int age, br_st;
    long int prihod;
}Artist;

void AddNewArtist(Artist *ap){
    fflush(stdin);
    printf("name:");
    gets(ap[count].name);
    printf("age:");
    scanf("%d", &ap[count].age);
    fflush(stdin);
    printf("country:");
    gets(ap[count].country);
    printf("prihodi:");
    scanf("%ld", &ap[count].prihod);
    printf("broy statuetki:");
    scanf("%d", &ap[count].br_st);
    count++;
    ap=(Artist*)realloc(ap, sizeof(Artist)*count);
}

Artist *ReturnCertainIncomeArtistArray(Artist *ap, long int income){
    Artist *pr;
    pr=(Artist*)calloc(2, sizeof(Artist));
    for(int i=0; i<count; i++){
        if(ap[i].prihod>income){
            strcpy(pr[count_pr].name, ap[i].name);
            pr[count_pr].age=ap[i].age;
            strcpy(pr[count_pr].country, ap[i].country);
            pr[count_pr].prihod=ap[i].prihod;
            pr[count_pr].br_st=ap[i].br_st;
            count_pr++;
            pr=(Artist*)realloc(pr, sizeof(Artist)*count_pr);
        }
    }
    return pr;
}

void File(Artist *ap){
    FILE *fp;
    fp=fopen("artists.txt", "r");
    if(fp==NULL){exit(perror);}
    int ch, red=0, j=0; //age, br_st;
    //char name[45], country[20];
    //long int prihod;
    for(;;){
        ch=getc(fp);
        if(ch=='\n'){red++;}
        if(ch==EOF){red++; break;}
    }

    rewind(fp);

    for(int i=0; i<red; i++){
        for(;;){
            ch=getc(fp);
            if(ch==';'){break;}
            ap[count].name[j]=ch;
            j++;
        }
        j=0;
        fscanf(fp, "%d", &ap[count].age);
        getc(fp);
        for(;;){
            ch=getc(fp);
            if(ch==';'){break;}
            ap[count].country[j]=ch;
            j++;
        }
        j=0;
        fscanf(fp, "%ld", &ap[count].prihod);
        getc(fp);
        fscanf(fp, "%d", &ap[count].br_st);
/*
        strcpy(ap[count].name, name);
        ap[count].age=age;
        strcpy(ap[count].country, country);
        ap[count].prihod=prihod;
        ap[count].br_st=br_st;
        */
        count++;
        ap=(Artist*)realloc(ap, sizeof(Artist)*count);
    }
    fclose(fp);
}

void Print(Artist *ap, int cnt){
    for(int i=0; i<cnt; i++){
        printf("[%d]:\n", i+1);
        printf("name: %s\n", ap[i].name);
        printf("age: %d\n", ap[i].age);
        printf("country: %s\n", ap[i].country);
        printf("prihodi: %ld\n", ap[i].prihod);
        printf("broy statuetki: %d\n", ap[i].br_st);
    }
}

int main(){
    Artist *ap;
    ap=(Artist*)calloc(2, sizeof(Artist));
    char command[10];

    do{
        printf("command:");
        scanf("%s", command);
        if(strcmp(command, "Add")==0){
            AddNewArtist(ap);
        }
        else if(strcmp(command, "Prihod")==0){
            long int income;
            printf("prihod:");
            scanf("%ld", &income);
            Artist *vp;
            vp=(Artist*)calloc(2, sizeof(Artist));
            vp=ReturnCertainIncomeArtistArray(ap, income);
            Print(vp, count_pr);
            free(vp);
            count_pr=0;
        }
        else if(strcmp(command, "File")==0){
            File(ap);
        }
        else if(strcmp(command, "Print")==0){
            Print(ap, count);
        }
    }while(strcmp(command, "END")!=0);
    free(ap);
    return 0;
}
