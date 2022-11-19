#include <stdio.h>
#include <stdlib.h>

struct point
{
    int points[3][3];
};

int main(){
    struct point pnt;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
        printf("vavedi %d-ta tochka, %d coordinata:", i+1, j+1);
        scanf("%d", &pnt.points[i][j]);
        }
    }

    for(int i=0; i<3; i++){
        printf("[%d]:\t", i+1);
        for(int j=0; j<3; j++){
        printf("%d\t", pnt.points[i][j]);
        }
        printf("\n");
    }

    return 0;
}

