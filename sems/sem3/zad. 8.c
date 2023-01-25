#include<stdlib.h>
#include<stdio.h>
int main(){
    int V, N, v;
    printf("V=");
    scanf("%d", &V);
    printf("N hours=");
    scanf("%d", &N);
    v=5*N+10*N;
    if (v>V){
        printf("basejna e pulen! %d litra v poveche!", v-V);
    }
    else{
        printf("%d l sa se vlqli!", v);
    }
    return 0;
}
