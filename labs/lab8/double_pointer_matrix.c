#include<stdlib.h>
#include<stdio.h>
int main(){
    int rows = 3, columns = 4, count = 0;

    int** matrix = (int**) malloc(rows*sizeof(int*));   //zadelq se pamet za redovete
    for (int i = 0; i < rows; i++)
    {
        matrix[i] = (int*) malloc(columns*sizeof(int)); //zadelq se pamet za kolonite
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            matrix[i][j] = ++count;
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < rows; i++)
    {
        free(matrix[i]);
    }

    free(matrix);

}
