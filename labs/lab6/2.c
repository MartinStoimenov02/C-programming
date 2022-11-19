#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr[7], max;
    for (int i=0; i<7; i++){
        printf("[%d]:", i+1);
        scanf("%d", &arr[i]);
    }
    max=arr[0];
    for (int i=1; i<7; i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }
    printf("max: %d", max);
    return 0;
}
