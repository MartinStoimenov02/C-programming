#include<stdio.h>
#include<stdlib.h>

int count=0, count_date=0;

typedef struct{
    char name[31];
    int id;
    char date[21];
    float price;
}Item;

void AddNewItem(Item *ip){
    fflush(stdin);
    printf("name:");
    gets(ip[count].name);
    printf("ID:");
    scanf("%d", &ip[count].id);
    fflush(stdin);
    printf("Date(YYYY.MM.DD):");
    scanf("%s", ip[count].date);
    printf("Price:");
    scanf("%f", &ip[count].price);
    FILE *fp;
    fp=fopen("in", "ab");
    if(fp==NULL){
        //exit(perror);
        printf("error writing in bin file!");
        exit(1);
    }
	if(fwrite(&ip[count], sizeof(ip[count]), 1, fp)!=1){printf("error writing in binary file!");}
	count++;
	ip=(Item*)realloc(ip, sizeof(Item)*count);
	fclose(fp);
}

Item *Date(Item *ip, char *dt){
	Item *dat;
	dat=(Item*)calloc(2, sizeof(Item));
	for(int i=0; i<count; i++){
		if(strcmp(ip[i].date, dt)==0){
			strcpy(dat[count_date].name, ip[i].name);
			dat[count_date].id=ip[i].id;
			strcpy(dat[count_date].date, ip[i].date);
			dat[count_date].price=ip[i].price;
			count_date++;
			dat=(Item*)realloc(dat, sizeof(Item)*count_date);
		}
	}
	return dat;
}

void Print(Item *ip, int cnt){
	for(int i=0; i<cnt; i++){
		printf("[%d]:", i+1);
		printf("name: ");
		puts(ip[i].name);
		printf("ID: %d\n", ip[i].id);
		printf("Date: %s\n", ip[i].date);
		printf("Price: %g\n", ip[i].price);
	}
}

/*
void File(){
	FILE *fp;
	//if(fp=open("in", "rb")==NULL){exit(perror);}
	fp=fopen("in", "rb");
    if(fp==NULL){
        printf("error file!");
        exit(perror);
    }
	Item in[count];
	for(int i=0; i<count; i++){
		if(fread(&in[i], sizeof(in[i]), 1, fp)!=1){printf("error reading from bin file!");}
	}
	fclose(fp);
	//if(file=fopen("outTxt.txt", "w")==NULL){printf("error open txtOut file!");exit(1);}
	fp=fopen("outTxt.txt", "w");
    if(fp==NULL){
        printf("error file!");
        exit(perror);
    }
	for(int i=0; i<count; i++){
		if(fwrite(&in[i], sizeof(in[i]), 1, fp)!=1){printf("error writing in text file!");}
	}
	fclose(fp);
	//if(file=fopen("outText.txt", "r")==NULL){exit(perror);}
	fp=fopen("outTxt.txt", "r");
    if(fp==NULL){
        printf("error file!");
        exit(perror);
    }
	Item txt[count];
	for(int i=0; i<count; i++){
		if(fread(&txt[i], sizeof(txt[i]), 1, fp)!=1){printf("error reading from text file!");}
	}
	fclose(fp);
	for(int i=0; i<count; i++){
		printf("Binary Item:\n");
		printf("\tname: ");
		puts(in[i].name);
		printf("\tID: %d\n", in[i].id);
		printf("\tDate: %s\n", in[i].date);
		printf("\tPrice: %g\n\n", in[i].price);
		printf("Text Item:\n");
		printf("\tname: ");
		puts(txt[i].name);
		printf("\tID: %d\n", txt[i].id);
		printf("\tDate: %s\n", txt[i].date);
		printf("\tPrice: %g\n\n", txt[i].price);
	}
}
*/

void File(){
	FILE *fp;
	int br=0;
	fp=fopen("in", "rb");
    if(fp==NULL){
        printf("error file!");
        exit(perror);
    }
	Item *in;
	in=(Item*)calloc(2, sizeof(Item));
    while(fread(&in[br], sizeof(in[br]), 1, fp)==1){
        br++;
        in=(Item*)realloc(in, sizeof(Item)*(br+1));
    }
	fclose(fp);
	fp=fopen("outTxt.txt", "w");
    if(fp==NULL){
        printf("error file!");
        exit(perror);
    }
	for(int i=0; i<br; i++){
		if(fwrite(&in[i], sizeof(in[i]), 1, fp)!=1){printf("error writing in text file!");}
	}
	fclose(fp);
	fp=fopen("outTxt.txt", "r");
    if(fp==NULL){
        printf("error file!");
        exit(perror);
    }
	Item txt[br];
	for(int i=0; i<br; i++){
		if(fread(&txt[i], sizeof(txt[i]), 1, fp)!=1){printf("error reading from text file!\n");}
	}
	fclose(fp);
	for(int i=0; i<br; i++){
		printf("Binary Item:\n");
		printf("\tname: ");
		puts(in[i].name);
		printf("\tID: %d\n", in[i].id);
		printf("\tDate: %s\n", in[i].date);
		printf("\tPrice: %g\n\n", in[i].price);
		printf("Text Item:\n");
		printf("\tname: ");
		puts(txt[i].name);
		printf("\tID: %d\n", txt[i].id);
		printf("\tDate: %s\n", txt[i].date);
		printf("\tPrice: %g\n", txt[i].price);
		printf("------------------\n");
	}
	free(in);
}

int main(){
	Item *ip;
	ip=(Item*)calloc(2, sizeof(Item));
	char command[10];
	do{
		printf("command:");
		scanf("%s", command);
		if(strcmp(command, "Add")==0){
			AddNewItem(ip);
		}
		else if(strcmp(command, "Date")==0){
			Item *date_god;
			date_god=(Item*)calloc(2, sizeof(Item));
			char dt[11];
			printf("date:");
			scanf("%s", dt);
			date_god=Date(ip, dt);
			if(count_date!=0){Print(date_god, count_date);}
			else{printf("nqma product s tazi data!\n");}
			count_date=0;
			free(date_god);
		}
		else if(strcmp(command, "File")==0){File();}
		else if(strcmp(command, "Print")==0){Print(ip, count);}
	}while(strcmp(command, "END")!=0);
	free(ip);
	return 0;
}
