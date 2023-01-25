#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    printf("number:");
    scanf("%d", &i);
    if (i>6){
        printf("%d e po-golqmo ot 6!", i);
    }
    else{
        printf("%d ne e po-golqmo ot 6!", i);
    }
    return 0;
}
