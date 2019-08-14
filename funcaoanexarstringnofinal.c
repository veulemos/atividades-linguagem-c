#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

char str1[100], str2[100];

printf("Entre com uma palavra:\n");
gets(str1);
strcpy(str2,"Voce digitou a string: ");
strcat(str2,str1);
printf("\n\n %s", str2);
printf("\n\nMaiusculo: %s",strupr(str2));
printf("\n\nMinusculo: %s",strlwr(str2));
return 0;
}
