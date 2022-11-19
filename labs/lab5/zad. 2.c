#include<stdlib.h>
#include<stdio.h>
int main()
{
    int av, bv;
    int *a, *b;
    printf("av=");
    scanf("%d", &av);
    printf("bv=");
    scanf("%d", &bv);
    a=&av;  //purvo trqbwa da se nasochi kum neshto
    //*a=30;  sled tova se smenq stoynostta na kletkata, chiyto adres so`i ukazatelq
    b=&bv;
    printf("a= %d\n", *a);
    printf("b= %d\n", *b);
    printf("sum: %d\n", *a+*b);
    printf("razl: %d\n", *a-*b);
    printf("umn: %d\n", *a**b);
    printf("del: %d\n", *a/ *b);
    return 0;
}
