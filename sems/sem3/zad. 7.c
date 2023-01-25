#include<stdlib.h>
#include<stdio.h>
int main(){
    int n;
    char DN;
    float price;
    start:
    printf("kilometres:");
    scanf("%d", &n);
    fflush(stdin);
    printf("Day or Night(D/N):");
    scanf("%c", &DN);

    if (n<20){
        if(DN =='D')
        {
            price = (0.79*n)+0.70;
        }
        else if(DN =='N')
        {
            price = (0.90*n)+0.70;
        }
        else{
            goto start;
        }
    }

    if (n>=20 && n<100){
        if(DN == 'D' || DN == 'Y')
        {
            price = 0.09 * n;
            printf("100: %g\n", price);
        }
    }

    if (n>=100){
        if(DN =='D' || DN =='N')
        {
            price = 0.06 * n;
            printf("100+: %g\n", price);
        }
    }
    printf("%g\n", price);
    return 0;
}
