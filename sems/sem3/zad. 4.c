#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float m=0;
    printf("num=");
    scanf("%d", &n);
    if (n%2==0){
        m=m+1;
    }
    else if(n%5==0 && n%10!=0){
        m=m+2;
    }
    if (n<=100){
        m=m+5;
    }
    else if(n>100 &&n<=1000){
        m=m+(n*0.2);
    }
    else{
        m=m+(n*0.1);
    }
    printf("bonus=%g\n", m);
    printf("obshto=%g\n", n+m);
    return 0;
}
