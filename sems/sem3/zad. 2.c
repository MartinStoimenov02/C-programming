#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h, m;
    scanf("%d", &h);
    scanf("%d", &m);
    m=m+15;
    if (m>59){
        h=h+1;
        m=m-60;

    }
    if (h>23){
        h=0;
    }
    if (m>=0 && m<9){
        printf("%d:0%d", h, m);
    }
    else{
        printf("%d:%d", h, m);
    }
    return 0;
}
