#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr[7], index=0;
    double av, sum, dist;
    for (int i=0; i<7; i++){
        printf("[%d]:", i+1);
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<7; i++){
        sum+=arr[i];
    }
    av=sum/7;
    printf("%f\n", av);
    dist=abs(abs(av)-abs(arr[0]));
    for (int i=1; i<7; i++){

        if (abs(abs(av)-abs(arr[i]))<dist){
            dist=abs(abs(av)-abs(arr[i]));
            index=i;
        }
    }
    printf("av: %lf; nay blizka: %d; na poziciq: %d\n", av, arr[index], index+1);
    return 0;
}
