void visoka(n){
    printf("/");
    for(int i=0;i<n/2;i++){
        printf("*");
    }
    printf("\\");
}
void niska(n){
    for(int i=0;i<n/2;i++){
        printf("_");
    }
}
void stena(n){
    printf("|");
    for(int i=0;i<n*2-2;i++){
        printf(" ");
    }
    printf("|\n");
}
void osnova(n){
    printf("\\");
    for(int i=0;i<n/2;i++){
        printf("_");
    }
    printf("/");
}
void prazno(n){
    for(int i=0;i<n/2;i++){
        printf(" ");
    }
}
void otgore(n){
    visoka(n);
    if(n>4){
        niska(n);
    }
    visoka(n);
}
void otdolu(n){
    osnova(n);
    if(n>4){
        prazno(n);
    }
    osnova(n);
}

int main(){
    int n;
    printf("Vuvedete n: ");
    scanf("%d",&n);
    otgore(n);
    printf("\n");
    for(int i=0;i<n-3;i++){
        stena(n);
    }
    if(n>4){
        printf("|");
        for(int i=0;i<n/2+1;i++){
            printf(" ");
        }
        for(int i=0;i<n/2;i++){
            printf("_");
        }
        for(int i=0;i<n/2+1;i++){
            printf(" ");
        }
        printf("|\n");
    }
    else{
        stena(n);
    }
    otdolu(n);
    return 0;
}
