#include <stdio.h>
#include <stdlib.h>

int main(){
    int br=0;
    char niz[100], niz2[100];
    printf("Enter 1st niz: ");
    fgets(niz, sizeof(niz), stdin);
    printf("sentence 1: ");
    puts(niz);
    fflush(stdin);
    printf("Enter 2nd niz: ");
    fgets(niz2, sizeof(niz2), stdin);
    printf("sentence 2: ");
    puts(niz2);
    for (int i=0; i<strlen(niz); i++){
        printf("%c", niz[i]);
        if (niz[i]!=niz2[i]){
            printf("dvana niza ne sa ednakvi!");
            return 0;
        }
    }
    printf("dvata niza sa ednakvi");
    return 0;
}
