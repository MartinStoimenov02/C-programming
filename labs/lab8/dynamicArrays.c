#include<stdlib.h>
#include<stdio.h>
int main(){
    // Declare pointer to int:
    int* array_pointer, a;

    // Allocate memory for 10 integers:
    array_pointer = calloc(10, sizeof(int));

    // Assign values:
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a);
        *(array_pointer + i)=a;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("*(array_pointer + %d) = %d.\n", i, *(array_pointer + i));
    }

    // Free the allocated memory:
    free(array_pointer);
    printf("\n");
    return 0;
}
