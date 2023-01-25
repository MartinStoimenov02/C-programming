#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=1, s=0;
    while(num!=0){
        printf("number:");
        scanf("%d", &num);
        s=s+num;
    }
    printf("sum:%d", s);
    return 0;
}
