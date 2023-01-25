#include <stdio.h>
#include <stdlib.h>
#include<math.h>

float kvadrat()
{
    float a;
    printf("a=");
    scanf("%f", &a);
    printf("kvadrat\n");
    return a*a;
}

float prav()
{
    float a, b;
    printf("a=");
    scanf("%f", &a);
    printf("a=");
    scanf("%f", &b);
    printf("pravougulnik\n");
    return a*b;
}

float trig()
{
    float a, b;
    printf("a=");
    scanf("%f", &a);
    printf("a=");
    scanf("%f", &b);
    printf("pravougulen triagalnik\n");
    return (a*b)/2;
}

float okr()
{
    float r;
    printf("r=");
    scanf("%f", &r);
    printf("okruzhnost\n");
    return r*r*M_PI;
}

int main()
{
    int fig;
    printf("figura:");
    scanf("%d", &fig);
    if (fig==1){
        printf("%f", kvadrat());
    }

    if (fig==2){
        printf("%f", prav());
    }

    if (fig==3){
        printf("%f", trig());
    }

    if (fig==4){
        printf("%f", okr());
    }
    return 0;
}
