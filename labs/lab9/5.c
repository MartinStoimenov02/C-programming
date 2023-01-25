#include <stdio.h>
#include <stdlib.h>

int main(){
    int br=0;
    char niz[100];
    printf("Enter: ");
    fgets(niz, sizeof(niz), stdin);
    printf("sentence: ");
    puts(niz);
    for (int i=0; i<strlen(niz); i++){
        printf("%c", niz[i]);
        if (niz[i]=='a' || niz[i]=='e' || niz[i]=='u' || niz[i]=='y' ||niz[i]=='o' || niz[i]=='i'){
            br++;
        }
    }
    printf("broq na glasnite e: %d", br);
    return 0;
}
