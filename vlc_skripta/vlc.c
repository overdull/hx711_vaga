#include<stdio.h>
#include<stdlib.h>

int main (void){
FILE *f1;
FILE *f2;
FILE *f3;

char string[1000];
char number = '0';
int i;
int broj = 0;
int od= 0;
int dotu = 0;
char ime[20];
char dodatak[100];
printf("upisi ime datoteke\n");
scanf("%s",ime);

printf("upisi broj od kuda da krene\n");
scanf("%d",&od);

printf("upisi broj do kuda da trazi\n");
scanf("%d",&dotu);

printf("upisi link:\n");
scanf("%s", string);

printf("upisi nastavak\n");
scanf("%s",dodatak);

broj= od;

for (i=od;i<=dotu;i++){
	f1=fopen(ime,"a+");
	fprintf(f1,"%s",string);
	fclose(f1);
	f2=fopen(ime,"a");
	fprintf(f2,"%d",broj);
	fclose(f2);
	broj++;
	f3=fopen(ime,"a");
	fprintf(f3,"%s\n",dodatak);
	fclose(f3);
}

return 0;

}

