#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k, s=0, num;
    printf("number 1:");
    scanf("%d", &n);
    printf("number 2:");
    scanf("%d", &k);
    for (int i=1; i<=n; i++){
        printf("[%d]:", i);
        scanf("%d", &num);
        if(num>k && num%3==0){
            s=s+1;
        }
    }
    printf("sum: %d", s);
    return 0;
}
