#include<stdlib.h>
#include<stdio.h>
int main(){
    int n, br=1, var, max;
    printf("n=");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("[%d]:", i+1);
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        printf("%d\t", arr[i]);
    }
    max=br;
    for (int i=1; i<n; i++){
        if (arr[i-1]==arr[i]){
            br++;
        }
        else{
            br=1;
        }
    if (br>max){
        max=br;
        var=arr[i];
    }
    }
    printf("\n%d broq %d", max, var);
    return 0;
}
