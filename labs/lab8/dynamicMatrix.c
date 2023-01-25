#include<stdlib.h>
#include<stdio.h>
int main(){
int rows = 3, columns = 4;
    int* matrix_pointer = malloc((rows*columns)*sizeof(int));

    // Storing values from 1-12 in the array (like a 1D sequence):
    for (int i = 0; i < rows*columns; i++)
    {
        matrix_pointer[i] = i + 1;
    }

    // Print the sequence like a matrix (2D array):
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", matrix_pointer[i*columns + j]);
        }
        printf("\n");
    }

    free(matrix_pointer);
}
