#include <stdio.h>
#include <stdlib.h>

int main()
{
   int number;
   FILE* file_pointer;

   if ((file_pointer = fopen("D:\\input_number.TXT", "r")) == NULL)
   {
        printf("Error! opening file");

        //Program exits if the file pointer returns NULL.
       exit(1);
   }

   fscanf(file_pointer, "%d", &number);

   printf("Value of n = %d\n", number);
   fclose(file_pointer);

   return 0;
}
