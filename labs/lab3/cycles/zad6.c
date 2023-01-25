#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, y=0;
    printf("number 1:");
    scanf("%f", &a);
    printf("number 2:");
    scanf("%f", &b);
    if (a<b){
        for (int i=a+1; i<b; i++){
            y=(i*i)-4;
            printf("f(x)=%f\n", y);
        }
    }
    else if(a>b){
        for (int i=b+1; i<a; i++){
            y=(i*i)-4;
            printf("f(x)=%f\n", y);
        }
    }
    else{
        printf("a i b sa ravni!");
    }
    return 0;
}
