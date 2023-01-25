#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float m=0;
    int *np=NULL;
    float *mp=NULL;
    printf("num=");
    scanf("%d", &n);
    np=&n;
    mp=&m;
    if (*np%2==0){
        *mp=*mp+1;
    }
    else if(*np%5==0 && *np%10!=0){
        *mp=*mp+2;
    }
    if (n<=100){
        *mp=*mp+5;
    }
    else if(*np>100 &&*np<=1000){
        *mp=*mp+(*np*0.2);
    }
    else{
        *mp=*mp+(*np*0.1);
    }
    printf("bonus=%g\n", *mp);
    printf("obshto=%g\n", *np+*mp);
    return 0;
}
