#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* file_pointer;
    int i;

    if((file_pointer = fopen("D:\\6_fwrite_fread.TXT", "wb")) == NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }

    i = 100;

    if (fwrite(&i, 4, 1, file_pointer) != 1)    //funkciqta vrashta broy zapisani element; 1: argument, that we write, 2: sizeof(broy bajtove za daden tip), 3: broy elementi za zapisvane, 4: pointer, koyto sochi kum faila za zapisvane
    {
        printf("Write error occurred.\n");
        exit(1);
    }

    fclose(file_pointer);

    if ((file_pointer = fopen("D:\\6_fwrite_fread.TXT", "rb")) == NULL)
    {
        printf("Cannot open file. \n");
        exit(1);
    }

    if (fread(&i, 4, 1, file_pointer) != 1) //kato fwrite
    {
        printf("Read error occurred. \n");
        exit(1);
    }

    printf("i is %d & %c", i, i);
    fclose(file_pointer);

    return 0;
}
