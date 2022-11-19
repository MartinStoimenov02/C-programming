#include<stdlib.h>
#include<stdio.h>
int main(){
    int n, br=1, j=0, var, max, dist;
    printf("n=");
    scanf("%d", &n);
    int arr[n], b[n];
    for(int i=0; i<n; i++){
        printf("[%d]:", i+1);
        scanf("%d", &arr[i]);
    }


    for(int i=0; i<n; i++){
        printf("%d\t", arr[i]);
    }


    max=0;
    dist=arr[1]-arr[0];
    for (int i=1; i<n; i++){
       if(br>max){
            max=br;
       }
        if (arr[i-1]<arr[i] && arr[i]-arr[i-1]==dist){
            br++;
            b[j]==arr[i-1];
            j++;
            b[j]=arr[i];
            j++;
        }
        else{
            j=0;
            br=1;
            dist=arr[i]-arr[i-1];
        }
    }


    printf("\n");
    printf("max:%d\n", max);


    for(int i=0; i<max; i++){
        printf("%d\t", b[i]);
    }


    return 0;
}
