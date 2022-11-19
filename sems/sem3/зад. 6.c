#include<stdlib.h>
#include<stdio.h>
int main(){
    int x1, y1, x2, y2, x, y;
    printf("x1:");
    scanf("%d", &x1);
    printf("y1:");
    scanf("%d", &y1);
    printf("x2:");
    scanf("%d", &x2);
    printf("y2:");
    scanf("%d", &y2);
    printf("x:");
    scanf("%d", &x);
    printf("y:");
    scanf("%d", &y);
    if (x>=x1 && x<=x2 && y>=y1 && y<=y2){
        printf("the point {%d, %d} is Inside!", x, y);
    }
    else{
        printf("the point {%d, %d} is Outside!", x, y);
    }
    return 0;
}
