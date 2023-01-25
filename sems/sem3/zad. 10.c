#include<stdlib.h>
#include<stdio.h>
int main(){
    unsigned int n, arr[1000];
    float p1, p2, p3, p4, p5;
    printf("n=");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        printf("[%d]:", i+1);
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        if (arr[i]<200){
            p1=p1+1;
        }
        else if(arr[i]>=200 && arr[i]<400){
            p2=p2+1;
        }
        else if(arr[i]>=400 && arr[i]<600){
            p3=p3+1;
        }
        else if(arr[i]>=600 && arr[i]<800){
            p4=p4+1;
        }
        else if(arr[i]>=800){
            p5=p5+1;
        }
    }
    printf("0-200: %g%%\n", (p1/n)*100);
    printf("200=399:%g%%\n", (p2/n)*100);
    printf("400-599: %g%%\n", (p3/n)*100);
    printf("600-799: %g%%\n", (p4/n)*100);
    printf("800-1000: %g%%\n", (p5/n)*100);
    return 0;
}
