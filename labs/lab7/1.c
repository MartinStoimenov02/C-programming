#include<stdlib.h>
#include<stdio.h>
int main(){

int n, j;
printf("n=(redove): ");
scanf("%d", &n);
float arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("[[%d][%d]]: ", i, j);
            scanf("%f", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
        {
            printf("%f\t", arr[i][i]);
        }
    j = n-1;
    printf("\n");
    for (int i = 0; i < n; i++)
    {
            printf("%f\t", arr[i][j]);
            j--;
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            printf("%f\t", arr[i][j]);
        }

    }
    printf("\n");
    for (int i = 1; i < n; i++)
    {
        for(j=0; j<i; j++){
            printf("%f\t", arr[i][j]);
        }
    }

    return 0;
}
