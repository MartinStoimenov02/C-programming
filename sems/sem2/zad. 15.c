#include <stdio.h>
int main()
{
    float plosht,plochkaW,plochkaL,peikaW,peikaL;
    printf("Strana na ploshtadka, plochka W i L, peika W i L\n");
    scanf("%f%f%f%f%f",&plosht,&plochkaW,&plochkaL,&peikaW,&peikaL);
    printf("Shte otneme %.2f min.\n", ((plosht*2-peikaW*peikaL)/plochkaW*plochkaL)*0.2);
}
