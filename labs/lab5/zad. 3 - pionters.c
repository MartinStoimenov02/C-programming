#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    int *ap, *bp, *cp;
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    printf("c=");
    scanf("%d", &c);
    ap=&a;
    bp=&b;
    cp=&c;
    if (*ap==*bp && *bp==*cp && *ap==*cp){
        printf("yes!");
    }
    else{
        printf("no!");
    }
    return 0;
}
