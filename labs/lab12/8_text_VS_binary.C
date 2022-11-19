//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    FILE *first_file_pointer, *second_file_pointer;
//    int i = 1500, a, b;
//
//    if ((first_file_pointer = fopen("D:\\Binary", "wb")) == NULL)
//    {
//        printf("Couldn't open the binary file!\n");
//        exit(1);
//    }
//
//    if ((second_file_pointer = fopen("D:\\TXT", "w")) == NULL)
//    {
//        printf("Couldn't open the text file!\n");
//        exit(1);
//    }
//
//    fprintf(second_file_pointer, "%d", i);
//
//    if (fwrite(&i, sizeof(int), 1, first_file_pointer) != 1)
//    {
//        printf("Writing error occurred!\n");
//        exit(1);
//    }
//
//    fclose(first_file_pointer);
//    fclose(second_file_pointer);
//
//    if ((first_file_pointer = fopen("D:\\Binary", "rb")) == NULL)
//    {
//        printf("Couldn't open the binary file!\n");
//        exit(1);
//    }
//
//    if ((second_file_pointer = fopen("D:\\TXT", "r")) == NULL)
//    {
//        printf("Couldn't open the text file!\n");
//        exit(1);
//    }
//
//    if (fread(&a, sizeof(int), 1, first_file_pointer) != 1)
//    {
//        printf("Writing error occurred!\n");
//        exit(1);
//    }
//
//    fscanf(second_file_pointer, "%d", &b);
//
//    printf("a is %d and b is %d", a, b);
//    fclose(first_file_pointer);
//    fclose(second_file_pointer);
//    return 0;
//}
//
