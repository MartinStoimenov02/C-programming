#include<stdlib.h>
#include<stdio.h>
int main(){
    int rows = 3, columns = 4, count = 0;

    int (*matrix)[rows][columns] = malloc(sizeof *matrix);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            (*matrix)[i][j] = ++count;
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", (*matrix)[i][j]);
        }
    }

    free(matrix);
}
