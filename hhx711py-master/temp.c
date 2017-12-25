#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main (){

char dir[1000];
strcpy(dir,"cd /sys/bus/w1/devices/28-00000857cbaa/ && cat w1_slave");
system(dir);
char cmd[10000];








prinf(cmd);
prinf("\n");
return 0;
}
