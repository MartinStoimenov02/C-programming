#include<stdlib.h>
#include<stdio.h>
int main(){
    int a, b, c, sec, m=0, ns;
    int *ap, *bp, *cp, *secp;
    printf("1-st racer=");
    scanf("%d", &a);
    printf("2-nd racer=");
    scanf("%d", &b);
    printf("3-th racer=");
    scanf("%d", &c);
    ap=&a;
    bp=&b;
    cp=&c;
    secp=&sec;
    *secp=*ap+*bp+*cp;
    for(int i=0; i<*secp; i++){
        if(i%60==0 && i!=0){
            m=m+1;
        }
    }
    ns=*secp-(m*60);
    if (ns>0 && ns<10){
        printf("%d:0%d\n", m, ns);
    }
    else{
        printf("%d:%d\n", m, ns);
    }
    return 0;
}
