#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr[7], sum;
    for (int i=0; i<7; i++){
        printf("[%d]:", i+1);
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<7; i++){
        sum+=arr[i];
    }
    printf("sum: %d", sum);
    return 0;
}
