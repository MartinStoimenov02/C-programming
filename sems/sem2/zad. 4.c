#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    printf("znak:");
    scanf("%c", &a);
    printf("    %c\n", a);
    printf("   %c %c\n", a, a);
    printf("  %c   %c\n", a, a);
    printf(" %c     %c\n", a, a);
    printf("%c%c%c%c%c%c%c%c%c\n", a, a, a, a, a, a, a, a, a);

    printf("\n\n");

    printf("%c%c%c%c%c%c%c%c%c\n", a, a, a, a, a, a, a, a, a);
    printf(" %c     %c\n", a, a);
    printf("  %c   %c\n", a, a);
    printf("   %c %c\n", a, a);
    printf("    %c\n", a);
    return 0;
}
