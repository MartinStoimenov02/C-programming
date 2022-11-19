#include <stdio.h>
#include <stdlib.h>

int main(){
    int br=1;
    char words[100];
    printf("Enter words: ");
    fgets(words, sizeof(words), stdin);
    printf("sentence: ");
    puts(words);
    for (int i=0; i<strlen(words); i++){
        printf("%c", words[i]);
        if (words[i]==' '){
            br++;
        }
    }
    printf("broq na dumite e: %d", br);
    return 0;
}
