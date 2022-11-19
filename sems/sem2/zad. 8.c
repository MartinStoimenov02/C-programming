#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c;
    printf("levs:");
    scanf("%f", &c);
    printf("dolars: %g\n", c*0.56);
    printf("euro: %g\n", c*0.51);
    printf("pounds: %g\n", c*0.42);
    return 0;
}

