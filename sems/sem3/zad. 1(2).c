#include <stdio.h>
#include <stdlib.h>
#include<limits.h>

int min(int num, int min){
    if (num<min){
        return num;
    }
    return min;
}

int max(int num, int max){
    if (num>max){
        return num;
    }
    return max;
}

int main()
{
    int a=1, mi=INT_MAX, ma=INT_MIN;
    while (a!=0){
        printf("a=");
        scanf("%d", &a);
        if (a==0){
            break;
        }
        mi=min(a, mi);
        ma=max(a, ma);
    }
    printf("min: %d\n", mi);
    printf("max: %d\n", ma);
    return 0;
}
