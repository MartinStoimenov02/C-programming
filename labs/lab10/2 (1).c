#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct avto
{
    char type[20], marka[20], engine[20];
    int year, pow;
};

int main()
{
    int n, itg;
    char har[20], st[20];
    printf("n = ");
    scanf("%d", &n);
    struct avto pr[n];
    for(int i=0; i<n; i++){
    fflush(stdin);
    printf("type:");
    fgets(pr[i].type, sizeof(pr[i].type), stdin);
    printf("marka:");
    fgets(pr[i].marka, sizeof(pr[i].marka), stdin);
    printf("engine:");
    fgets(pr[i].engine, sizeof(pr[i].engine), stdin);
    printf("year:");
    scanf("%d", &pr[i].year);
    printf("power:");
    scanf("%d", &pr[i].pow);
    }
    printf("\n\n");
    for(int i=0; i<n; i++){
    printf("type:");
    puts(pr[i].type);
    printf("marka:");
    puts(pr[i].marka);
    printf("engine:");
    puts(pr[i].engine);
    printf("year: %d \n\n", pr[i].year);
    printf("power: %d \n", pr[i].pow);
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
            if(strcmp(st, pr[i].type)==0 || strcmp(st, pr[i].marka)==0 || strcmp(st, pr[i].engine)==0){
                printf("type:");
                puts(pr[i].type);
                printf("marka:");
                puts(pr[i].marka);
                printf("engine:");
                puts(pr[i].engine);
                printf("year: %d \n\n", pr[i].year);
                printf("power: %d \n", pr[i].pow);
                printf("\n\n");
            }
        }
    }

    else if (strcmp(har, "year") == 0 || strcmp(har, "power") == 0){
        printf("stoynost:");
        scanf("%d", &itg);
        printf("\n\n");
        for (int i=0; i<n; i++){
            if(itg==pr[i].year || itg==pr[i].pow){
                printf("type:");
                puts(pr[i].type);
                printf("marka:");
                puts(pr[i].marka);
                printf("engine:");
                puts(pr[i].engine);
                printf("year: %d \n\n", pr[i].year);
                printf("power: %d \n", pr[i].pow);
                printf("\n\n");
            }
        }
    }

    return 0;
}

