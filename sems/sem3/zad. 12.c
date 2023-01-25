#include <stdio.h>
#include <stdbool.h>

void printWing(int stars, bool reverse, bool isA)
{
   for (int i = 0; i < stars; i++)
   {
      if (isA)
      {
         printf("*");
      }
      else
      {
         printf("-");
      }
   }

   if (reverse)
   {
      printf("/ \\");
   }
   else
   {
      printf("\\ /");
   }

   for (int i = 0; i < stars; i++)
   {
      if (isA)
      {
         printf("*");
      }
      else
      {
         printf("-");
      }
   }
   printf("\n");
}
void printA(int stars)
{
   for (int i = 0; i < stars; i++)
   {
      printf(" ");
   }
   printf("@\n");
}

int main()
{
   printf("n:");
   int n = 0;
   scanf("%d3", &n);
   int width = 2 * n - 1;
   int height = 2 * (n - 2) + 1;
   int stars = (width - 3) / 2;
   bool isA = true;

   for (int i = 0; i < (height - 1) / 2; i++)
   {
      printWing(stars, 0, isA);
      isA = !isA;
   }
   isA = true;
   printA(width / 2);
   for (int i = 0; i < (height - 1) / 2; i++)
   {
      printWing(stars, 1, isA);
      isA = !isA;
   }

   return 0;
}
