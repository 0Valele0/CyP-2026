#include <stdio.h>
int main (void){
int total, h, m, s;
printf("segundos:");
scanf("%d", &total);
h = total / 3600;
m = (total % 3600) / 60;
s = (total % 3600) % 60;

printf("%d s= %d h %d min %d s\n", total, h, m,s);

return 0;
}