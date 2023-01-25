#include<stdio.h>
#include<stdlib.h>
int main(){
    float X, Y, Z, vin, pr;
    int br;
    printf("plosht loze:");
    scanf("%f", &X);
    printf("kg grozde na dekar:");
    scanf("%f", &Y);
    printf("zhelano kol. vino:");
    scanf("%f", &Z);
    printf("broy rabotnici:");
    scanf("%d", &br);
    pr=(X*Y)*0.4;
    vin=pr/2.5;
    if(vin>=Z){
        printf("dostgnato zhelanoto kolichestvo!\n");
        pr=(X*Y)*0.6;
        printf("br. rabotnici: %d, grozde za edin: %g", br, pr/br);
    }
    else{
        printf("%g e nedostatuchno kolichestvo!", pr);
    }
    return 0;
}
