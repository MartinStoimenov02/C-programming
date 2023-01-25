#include <math.h>
#include <stdio.h>
int main() {
   float w,h;
   scanf("%f%f",&w,&h);
   printf("Work spaces : %.0f" ,((w*100) / 120)*(((h*100) - 100) / 70) - 3);
   return 0;
}

