#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, min;
    printf("number 1:");
    scanf("%d", &a);
    printf("number 2:");
    scanf("%d", &b);
    printf("number 3:");
    scanf("%d", &c);
    if (a<b && a<c){
        min=a;
    }
    else if(b<a && b<c){
        min=b;
    }
    else if(c<a && c<b){
        min=c;
    }
    else{
        printf("ima dve ednakvi chisla!");
    }
    printf("%d", min);
    return 0;
}
