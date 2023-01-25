#include<stdio.h>
#include<stdlib.h>

void bin(int num){
    char c[3000];
    for(int i=0;num>0;i++)
    {
        printf("%d", num%2);
        num=num/2;
    }
}

int main(){
int n;
printf("Enter the number to convert: ");
scanf("%d",&n);
bin(n);
return 0;
}
