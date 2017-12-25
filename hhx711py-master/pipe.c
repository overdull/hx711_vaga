#include <stdio.h>
#include <stdlib.h>


int main( int argc, char *argv[] )
{

  FILE *fp;
  char path[1035];
int i = 0;
int j = 0;
char temp[10];
char temp1[10];
  /* Open the command for reading. */
  fp = popen("cat /sys/bus/w1/devices/28-00000857cbaa/w1_slave", "r");
  if (fp == NULL) {
    printf("Failed to run command\n" );
    exit(1);
  }

  /* Read the output a line at a time - output it. */
  while (fgets(path, sizeof(path)-1, fp) != NULL) {

	for( i = 29; i < 35;i++){
		if(j==0){
			break;
			}
		temp[i-29]=("%c",path[i]);
	}
	//printf("\n");
	j++;

  }
	//printf("%s",temp);
  /* close */
  pclose(fp);

FILE *f = fopen("porukaA.txt", "a");
if (f == NULL)
{
    printf("Error opening file!\n");
    exit(1);
}

/* print some text */


double d;
char temperaturaC = 'C';
sscanf(temp, "%lf", &d);

printf("%.3lf\n", d/1000);

fprintf(f, "%.3lf%c", d/1000,temperaturaC);


/* print integers and floats */





fclose(f);

  return 0;
}
