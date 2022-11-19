//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//    int a = 5, b, i;
//    FILE* file_pointer;
//
//    char first_string[] = "My name is Ivan. I am ";
//    char second_string[] = " years old!";
//    char third_string[sizeof(first_string)];
//    char fourth_string[sizeof(second_string)];
//
//    if ((file_pointer = fopen("D:\\9_my_file.TXT", "wb")) == NULL)
//    {
//        printf("Can't open file!\n");
//        exit(1);
//    }
//
//    if (fwrite(first_string, 1, strlen(first_string), file_pointer) != strlen(first_string))
//    {
//        printf("Writing error occurred!\n");
//        exit(2);
//    }
//
//    if (fwrite(&a, sizeof(int), 1, file_pointer) != 1)
//    {
//        printf("Writing error occurred!\n");
//        exit(3);
//    }
//
//    if (fwrite(second_string, 1, strlen(second_string), file_pointer) != strlen(second_string))
//    {
//        printf("Writing error occurred!\n");
//        exit(4);
//    }
//
//    fclose(file_pointer);
//
//    if ((file_pointer = fopen("D:\\9_my_file.TXT", "rb")) == NULL)
//    {
//        printf("Can't open file!\n");
//        exit(5);
//    }
//
//    if (fread(third_string, 1, (sizeof(third_string)) - 1, file_pointer) != ((sizeof(third_string)) - 1))
//    {
//        printf("Reading error occurred!\n");
//        exit(6);
//    }
//
//    if (fread(&b, sizeof(int), 1, file_pointer)!=1)
//    {
//        printf("Reading error occurred!\n");
//        exit(7);
//    }
//
//    if (fread(fourth_string, 1, (sizeof(fourth_string)) - 1, file_pointer) != (sizeof(fourth_string)) - 1)
//    {
//        printf("Reading error occurred!\n");
//        exit(8);
//    }
//
//    fclose(file_pointer);
//
//    for (i = 0; i < (sizeof(third_string)) - 1; i++) {printf("%c", third_string[i]);}
//    printf("%d", b);
//    for (i = 0; i < (sizeof(fourth_string)) - 1; i++) {printf("%c", fourth_string[i]);}
//    return 0;
//}
