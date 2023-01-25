#include<stdio.h>
#include<stdlib.h>

typedef struct{
    char name[15], midle_name[15], surname[15];
    int num, Ocenki[10], o;
}Student;

typedef struct{
    int name, k;
    Student st_class[30];
}Klas;

typedef struct{
    int v;
    Klas vip_class[10];
}Vipusk;

int main(){
    Vipusk vip;
    Klas cl;
    Student st;
    char command[20], command2[20], name[15], midle_name[15], surname[15], predmet[10];
    int nom, j=0, br, ocenka;
    do{
        start:
        printf("Command: ");
        scanf("%s", command);
        if(strcmp(command, "ADD")==0){
            scanf("%s", command2);
            if(strcmp(command2, "student")==0){
                br=0;
                scanf("%s", name);
                scanf("%s", midle_name);
                scanf("%s", surname);
                scanf("%d", &nom);

                for(int i=0; i<vip.v; i++){
                    for(int j=0; j<vip.vip_class[i].k; j++){
                        if(vip.vip_class[i].st_class[j].num==nom){
                            printf("student with this number already exist!\n");
                            goto start;
                        }
                    }
                }

                for(int i=0; i<vip.v; i++){
                    if(vip.vip_class[i].name==nom/100){
                        strcpy(vip.vip_class[i].st_class[vip.vip_class[i].k].name, name);
                        strcpy(vip.vip_class[i].st_class[vip.vip_class[i].k].midle_name, midle_name);
                        strcpy(vip.vip_class[i].st_class[vip.vip_class[i].k].surname, surname);
                        vip.vip_class[i].st_class[vip.vip_class[i].k].num=nom;
                        (vip.vip_class[i].k)++;
                        br=1;
                }
            }
            if(br==0){
                vip.vip_class[vip.v].name=nom/100;
                strcpy(vip.vip_class[vip.v].st_class[vip.vip_class[vip.v].k].name, name);
                strcpy(vip.vip_class[vip.v].st_class[vip.vip_class[vip.v].k].midle_name, midle_name);
                strcpy(vip.vip_class[vip.v].st_class[vip.vip_class[vip.v].k].surname, surname);
                vip.vip_class[vip.v].st_class[vip.vip_class[vip.v].k].num=nom;
                (vip.vip_class[vip.v].k)++;
                (vip.v)++;
            }
        }

        else if(strcmp(command2, "grade")==0){
            scanf("%s", predmet);
            scanf("%d", &ocenka);
            scanf("%d", &nom);
            for(int i=0; i<vip.v; i++){
                for(int j=0; j<vip.vip_class[i].k; j++){
                    if(nom==vip.vip_class[i].st_class[j].num){
                        vip.vip_class[i].st_class[j].Ocenki[vip.vip_class[i].st_class[j].o]=ocenka;
                        (vip.vip_class[i].st_class[j].o)++;
                    }
                }
            }
        }

        }
        else if(strcmp(command, "PRINT")==0){
            for(int i=0; i<vip.v; i++){
                printf("klas: %d\n", vip.vip_class[i].name);
                for(int j=0; j<vip.vip_class[i].k; j++){
                    printf("%d) %d: %s %s %s ", j+1, vip.vip_class[i].st_class[j].num%100, vip.vip_class[i].st_class[j].name, vip.vip_class[i].st_class[j].midle_name, vip.vip_class[i].st_class[j].surname);
                    for(int k=0; k<vip.vip_class[i].st_class[j].o; k++){
                        printf("%d ", vip.vip_class[i].st_class[j].Ocenki[k]);
                    }
                    printf("\n");
                }
            }
        }

        else if(strcmp(command, "Calculate")==0){
            scanf("%s", command2);
            if(strcmp(command2, "grades")==0){
                float sum=0, sum1=0;
                scanf("%d", &nom);
                for(int i=0; i<vip.v; i++){
                    if(nom==vip.vip_class[i].name){
                        for (int j=0; j<vip.vip_class[i].k; j++){
                            for(int k=0; k<vip.vip_class[i].st_class[j].o; k++){
                                sum+=vip.vip_class[i].st_class[j].Ocenki[k];
                            }
                            sum1+=(sum/vip.vip_class[i].st_class[j].o);
                            sum=0;
                        }
                        printf("average: %g\n", sum1/vip.vip_class[i].k);
                    }
                }
            }
        }

    }while(strcmp(command, "END")!=0);
    return 0;
}
