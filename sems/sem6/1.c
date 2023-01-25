#include <stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char predmet[10];
    int br, val, ch=0, tb=0, cup=0, dsh=0;
    float pr=0;
    printf("broy gosti:");
    scanf("%d", &br);
    printf("predmeti:\n");
    do
    {
        scanf("%s", predmet);
        val=strcmp(predmet, "PARTY!");
        if (strcmp(predmet, "Table")==0){
            tb++;
        }
        else if(strcmp(predmet, "Chair")==0)
        {
            ch++;
        }
        else if(strcmp(predmet, "Cups")==0)
        {
            cup++;
        }
        else if(strcmp(predmet, "Dishes")==0)
        {
            dsh++;
        }

    }while(val!=0);

    pr=tb*42+ch*13.99+cup*5.98+dsh*21.02;
    printf("%g\n", pr);

    if (tb<=br/8.0){
        printf("%g Tables\n", ceil(br/8.0)-tb);
    }

    if (br>ch){
        printf("%d chairs\n", br-ch);
    }

    if (cup<br/6.0){
        printf("%g cups\n", ceil(br/6.0)-cup);
    }
    if (dsh<br/6.0){
        printf("%g dishes\n", ceil(br/6.0)-dsh);
    }
   return 0;
}
