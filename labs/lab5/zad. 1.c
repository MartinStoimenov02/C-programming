#include<stdlib.h>
#include<stdio.h>
int main(){
    int *point;
    int variable;
    printf("variable:");
    scanf("%d", &variable);
    point=&variable;
    printf("variable: %d\n", variable);
    printf("address: %p\n", &variable);
    printf("address: %x\n", point);
    return 0;
}
