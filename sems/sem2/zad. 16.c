#include <stdio.h>

int main(){
    int DaysPerMonth = 0, USDPerDay = 0, MoneyUSD = 0;
    float Bonus = 0, MoneyAfterTax = 0, MoneyBGN = 0, USDtoBGN = 0;

    printf("How many days a month does Ivan work for?\n");
    scanf("%d", &DaysPerMonth);
    printf("How many USD a day does Ivan get?\n");
    scanf("%d", &USDPerDay);
    MoneyUSD = DaysPerMonth*USDPerDay;
    printf("How many USD is 1 BGN?\n");
    scanf("%f", &USDtoBGN);
    Bonus = MoneyUSD * 2.5;
    MoneyAfterTax = MoneyUSD - 0.25;
    MoneyBGN = MoneyAfterTax*USDtoBGN;
    printf("Ivan gets %f BGN profit a year.\n", MoneyBGN);
    printf("This is %f BGN a day.", MoneyBGN / DaysPerMonth);
}
