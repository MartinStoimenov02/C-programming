#include<stdio.h>
#include<stdlib.h>

typedef struct{
    char name[50];
    float grade;
}student;

typedef struct{
    char paralelka[3];
    student st_class[100];
}clas;

typedef struct{
    int vip;
    clas cl_vip[100];
}vipusk;

int main(){
    student st;
    clas clazz;
    vipusk vipuzk;

    int n, m, br, name_vipusk;
    float sum_class=0, sum_vipusk=0;
    char class_name[3];

    printf("vipusk: ");
    scanf("%d", &name_vipusk);
    vipuzk.vip=name_vipusk;

    printf("broy klasove=");
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        printf("class name %d:", i+1);
        scanf("%s", class_name);
        strcpy(vipuzk.cl_vip[i].paralelka, class_name);
        printf("broy uchenici v %s:", class_name);
        scanf("%d", &m);
        for(int j=0; j<m; j++){
            fflush(stdin);
            printf("name:");
            gets(vipuzk.cl_vip[i].st_class[j].name);
            printf("grade:");
            scanf("%f", &vipuzk.cl_vip[i].st_class[j].grade);
        }
    }
    for(int i=0; i<n; i++){
        m=sizeof(vipuzk.cl_vip[i].st_class)/sizeof(vipuzk.cl_vip[i].st_class[0]);   //namirame broq na elementite na tekushtiq masiv
        printf("\nclass name: %s\n", vipuzk.cl_vip[i].paralelka);
        for(int j=0; j<m; j++){
            if (strcmp(vipuzk.cl_vip[i].st_class[j].name, "")!=0){
                printf("name:");
                puts(vipuzk.cl_vip[i].st_class[j].name);
                printf("grade: %g\n", vipuzk.cl_vip[i].st_class[j].grade);
                sum_class+=vipuzk.cl_vip[i].st_class[j].grade;
                br++;
            }
        }
        printf("broy uchenici v %s: %d\n", vipuzk.cl_vip[i].paralelka, br);
        printf("sredna ocenka na %s klas: %g", vipuzk.cl_vip[i].paralelka, sum_class/br);
        sum_vipusk+=sum_class/br;
        sum_class=0;
        br=0;
    }
    printf("\nsredna ocenka na vipusk %d: %g", vipuzk.vip, sum_vipusk/n);

    return 0;
}
