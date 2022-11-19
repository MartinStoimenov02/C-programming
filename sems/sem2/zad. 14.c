#include <stdio.h>

int main(){
    float zelcena, plodcena;
    int zelkg, plodkg;

    scanf("%f", &zelcena);
    scanf("%f", &plodcena);
    scanf("%d", &zelkg);
    scanf("%d", &plodkg);

    printf("Profit is %.2f Euro.\n", (zelcena*zelkg+plodcena*plodkg)*1.95);
}
