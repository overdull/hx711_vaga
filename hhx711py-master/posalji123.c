#include<stdio.h>
#include<string.h>
int main(){
        FILE *fp;
        char cmd[100];
        char to[] = "overdull8@gmail.com";
        char body[]= "ovo je vaga marko";
        fp=fopen("/home/pi/Desktop/hhx711py-master/poruka.txt", "r");

char * buffer = 0;
long length;

if (fp)
{
  fseek (fp, 0, SEEK_END);
  length = ftell (fp);
  fseek (fp, 0, SEEK_SET);
  buffer = malloc (length);
  if (buffer)
  {
    fread (buffer, 1, length, fp);
  }
  fclose (fp);
}else {
        char tempfile[100];

        strcpy( tempfile,tempnam("/tmp","sendmail"));
        FILE    *fp1 = fopen(tempfile,"w");
        fprintf(fp1,"trenutno stanje vage je %.5skg\n",buffer);
        fclose(fp1);
        sprintf(cmd,"sendmail %s < %s", to ,tempfile);
        system(cmd);
        return 0;
}}
