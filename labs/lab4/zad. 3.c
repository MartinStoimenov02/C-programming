#include <stdio.h>
#include <stdlib.h>

void ch(int num){
    if (num%2==0){
        printf("chetno");
    }
    else{
        printf("nechetno");
    }
}

int main()
{
    int n;
    printf("n=");
    scanf("%d", &n);
    ch(n);
    return 0;
}
