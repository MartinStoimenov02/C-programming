#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    printf("c=");
    scanf("%d", &c);
    if (a==b && b==c && a==c){
        printf("yes!");
    }
    else{
        printf("no!");
    }
    return 0;
}
