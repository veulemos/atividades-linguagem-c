#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
char s[256];
int i;
for(i = 0; i<26; i++){
    s[i] = 'A'+ i;
}
printf("\nA string contem\n");
printf("%s\n", s);
system("PAUSE");
return 0;
}
