#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE* file_pointer;

   file_pointer = fopen("D:\\5_print_scan.TXT", "w+");
   fprintf(file_pointer, "%s %s %s %d", "We", "are", "in", 2022);

   fclose(file_pointer);

   int character;

   file_pointer = fopen("D:\\5_print_scan.TXT","r");

   while (1)
    {
      character = fgetc(file_pointer);
      if (feof(file_pointer)) {break;}
      printf("%c", character);
   }

   fclose(file_pointer);
   return 0;
}
