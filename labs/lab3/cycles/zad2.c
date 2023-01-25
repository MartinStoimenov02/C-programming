#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, s;
    printf("number1:");
    scanf("%d", &a);
    printf("number2:");
    scanf("%d", &b);
    if (a<b){
        for (int i=a+1; i<b; i++){
            s=s+i;
        }
    }
    else if(a>b){
        for (int i=b+1; i<a; i++){
            s=s+i;
        }
    }
    else{
        printf("a i b sa ravni!");
    }
    printf("sum: %d", s);
    return 0;
}
