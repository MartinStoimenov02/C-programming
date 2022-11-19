#include <stdio.h>
#include <stdlib.h>

int main(){
    int br=0;
    char niz[100];
    printf("Enter niz: ");
    fgets(niz, sizeof(niz), stdin);
    printf("sentence 1: ");
    puts(niz);

    while(niz[br] != '\0')
    {
        br++;
    }

    printf("len of niz is: %d", br-1);
    return 0;
}
