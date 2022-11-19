#include <stdio.h>
#include <stdlib.h>

void razm(int ac, int bc){
    int pr;
    pr=ac;
    ac=bc;
    bc=pr;
    printf("a=%d\n", ac);
    printf("b=%d\n", bc);
}

int main()
{
    int a, b;
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    razm(a, b);
    return 0;
}
