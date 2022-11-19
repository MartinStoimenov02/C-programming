#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, s=0, p=1;
    printf("number1:");
    scanf("%d", &a);
    printf("number2:");
    scanf("%d", &b);
    if (a<b){
        for (int i=a+1; i<b; i++){
            if (i%2==0){
                s=s+i;
            }
            else{
                p=p*i;
            }
        }
    }
    else if(a>b){
        for (int i=b+1; i<a; i++){
            if (i%2==0){
                s=s+i;
            }
            else{
                p=p*i;
            }
        }
    }
    else{
        printf("a i b sa ravni!");
    }
    printf("sum: %d\n", s);
    printf("proizv: %d\n", p);
    return 0;
}
