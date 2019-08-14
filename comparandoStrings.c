#include <stdio.h>
#include <string.h>

 main(){
char str1[100], str2[100];

printf("\n\nEntre com uma string:\n");
gets(str1);
printf("\n\nEntre com outra string:\n");
gets(str2);
if(strcmp(str1,str2))
    printf("\n\nAs duas strings sao diferentes");
else
    printf("\n\nAs duas strings sao iguais");

}
