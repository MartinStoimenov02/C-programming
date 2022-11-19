#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    printf("number:");
    scanf("%d", &i);
    if (i%8>4){
        printf("ostatuka pri delenie na %d s 8 e po-golqmo ot 4!", i);
    }
    else{
        printf("ostatuka pri delenie na %d s 8 ne e po-golqmo ot 4!", i);
    }
    return 0;
}
