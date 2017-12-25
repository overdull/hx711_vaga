#include<stdio.h>

int main (void){
FILE *fp;
fp = fopen("porukaAA.txt","w");
//fp1 = fopen("porukaA.txt","r");
fprintf(fp,"ajaja");
fclose(fp);
sleep(10);
system("sendmail borna.kovacevic@fer.hr < porukaAA.txt");

return 0;
}
