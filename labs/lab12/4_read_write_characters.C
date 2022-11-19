//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//    char string[80] = "This is a file system test.\n";
//    FILE *file_pointer;
//    char *pointer;
//
//    int i;
//
//    if ((file_pointer = fopen("D:\\4_read_write_characters.TXT", "w")) == NULL)
//    {
//        printf("Cannot open file.\n");
//        exit(1);
//    }
//
//    pointer = string;
//    while (*pointer)
//    {
//        if (fputc(*pointer, file_pointer) == EOF)
//        {
//            printf("Error writing file.\n");
//            exit(1);
//        }
//        pointer++;
//    }
//
//    fclose(file_pointer);
//
//    if ((file_pointer = fopen("D:\\4_read_write_characters.TXT", "r")) == NULL)
//    {
//        printf("Cannot open file. \n");
//        exit(1);
//    }
//
//    for(;;)
//    {
//        i = getc(file_pointer);
//        if (i == EOF) {break;}
//        putchar(i);
//    }
//
//    fclose(file_pointer);
//    return 0;
//}
