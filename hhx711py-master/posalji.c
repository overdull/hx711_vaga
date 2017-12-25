#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>
int main(){
        FILE *fp;
        char cmd[1000];
        char to[] = "overdull8@gmail.com";
        char body[]= "ovo je vaga marko";
        fp=fopen("/home/pi/Desktop/hhx711py-master/izvjestaj.txt", "r");
char * buffer = 0;
long length;

if (fp)
{
  printf("if\n");
  fseek (fp, 0, SEEK_END);
  length = ftell (fp);
  fseek (fp, 0, SEEK_SET);
  buffer = malloc (length);
  if (buffer)
  {
	printf("if u bufferu\n"); 
 fread (buffer, 1, length, fp);
  }
  fclose (fp);
}
{
	printf("U elsu");
        char tempfile1[1000];
	strcpy(tempfile1,tempnam( "/home/pi/Desktop/hhx711py-master/poruke/" ,"izvjestaj.txt"));

        //strcpy( tempfile1,tempnam("/home/pi/Desktop","sendmail"));
        FILE    *fp1 = fopen(tempfile1,"w");
	//printf("%s",buffer);
        fprintf(fp1,"Trenutno stanje vage je %s \n",buffer);
	//printf("%s",tempfile1);

        
	//printf("%s",buffer);
        sprintf(cmd,"sendmail %s < %s", to ,tempfile1);
        system(cmd);
	//printf("%s",buffer);

        return 0;
}}
