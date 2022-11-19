#include <stdio.h>
#include <stdlib.h>

struct avto
{
    char type[20], marka[20], engine[20];
    int year, pow;
};

struct garage
{
    char name[15];
    struct avto gar[10];
};

int main(){
    struct avto pr;
    struct garage car;
    int itg, n=3;
    char har[20], st[20];
    strcpy(car.name, "Garage");
    for(int i=0; i<n; i++){
    printf("type:");
    fgets(car.gar[i].type, sizeof(car.gar[i].type), stdin);
    printf("marka:");
    fgets(car.gar[i].marka, sizeof(car.gar[i].marka), stdin);
    printf("engine:");
    fgets(car.gar[i].engine, sizeof(car.gar[i].engine), stdin);
    printf("year:");
    scanf("%d", &car.gar[i].year);
    printf("power:");
    scanf("%d", &car.gar[i].pow);
    fflush(stdin);
    }
    printf("\n\n");
    for(int i=0; i<n; i++){
    printf("type:");
    puts(car.gar[i].type);
    printf("marka:");
    puts(car.gar[i].marka);
    printf("engine:");
    puts(car.gar[i].engine);
    printf("year: %d \n\n", car.gar[i].year);
    printf("power: %d \n", car.gar[i].pow);
    printf("\n\n");
    }

    printf("harakteristika type, marka, engine, year or power:");
    scanf("%s", har);
    printf("sravnqvane po: %s\n", har);

    fflush(stdin);

    if (strcmp(har, "type") == 0 || strcmp(har, "marka") == 0 || strcmp(har, "engine") == 0){
        printf("stoynost:");
        fgets(st, sizeof(st), stdin);
        printf("\n\n");
        for (int i=0; i<n; i++){
            if(strcmp(st, car.gar[i].type)==0 || strcmp(st, car.gar[i].marka)==0 || strcmp(st, car.gar[i].engine)==0){
                printf("type:");
                puts(car.gar[i].type);
                printf("marka:");
                puts(car.gar[i].marka);
                printf("engine:");
                puts(car.gar[i].engine);
                printf("year: %d \n\n", car.gar[i].year);
                printf("power: %d \n", car.gar[i].pow);
                printf("\n\n");
            }
        }
    }

    else if (strcmp(har, "year") == 0 || strcmp(har, "power") == 0){
        printf("stoynost:");
        scanf("%d", &itg);
        printf("\n\n");
        for (int i=0; i<n; i++){
            if(itg==car.gar[i].year || itg==car.gar[i].pow){
                printf("type:");
                puts(car.gar[i].type);
                printf("marka:");
                puts(car.gar[i].marka);
                printf("engine:");
                puts(car.gar[i].engine);
                printf("year: %d \n\n", car.gar[i].year);
                printf("power: %d \n", car.gar[i].pow);
                printf("\n\n");
            }
        }
    }
    return 0;
}

