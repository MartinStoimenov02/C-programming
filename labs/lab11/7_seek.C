#include <stdio.h>
#include <stdlib.h>

double doubles[10] = {10.23, 19.87, 1002.23, 12.9, 0.897, 11.45, 75.34, 0.0, 1.01, 875.875};

int main()
{
    long location;
    double value;
    FILE* file_pointer;

    if ((file_pointer = fopen("D:\\seek_data.TXT", "wb")) == NULL)
    {
        printf("Cannot open file!\n");
        exit(1);
    }

    // Array Input:
    if (fwrite(doubles, sizeof(doubles), 1, file_pointer) != 1)
    {
        printf("Write error!\n");
        exit(1);
    }

    fclose(file_pointer);

    if ((file_pointer = fopen("D:\\seek_data.TXT", "rb")) == NULL)
    {
        printf("Cannot open file. \n");
        exit(1);
    }

    printf("Which element? ");
    scanf("%ld", &location);
    if (fseek(file_pointer, location*sizeof(double), SEEK_SET))
    {
        printf("Seek error!\n");
        exit(1);
    }

    fread(&value, sizeof(double), 1, file_pointer);
    printf("Element %ld is %.2f", location, value);
    fclose(file_pointer);

    return 0;
}

