#include <stdio.h>
#include <stdlib.h>


int main(){
char frase[256];
int i =0, cons=0, encontro=0;
printf("Informe a frase:");
gets(frase);

while(i<256){
    if(frase[i]=='\0'){
        break;
    }
    if((frase[i]>='A' && frase[i]<='Z')||(frase[i]>='a' && frase[i]<='z')||(frase[i]==32)){
        printf("\n%c", frase[i]);

        if((frase[i]!='A') && (frase[i]!='E') && (frase[i]!='I') && (frase[i]!='O') && (frase[i]!='U') && (frase[i]!=32)&&(frase[i]!='a') && (frase[i]!='e') && (frase[i]!='i') && (frase[i]!='o') && (frase[i]!='u') && (frase[i]!=32)) {
            cons++;

        }else {
            if(cons>1){
            encontro ++;
            cons=0;
            }else{
            cons=0;
            }
        }
        i++;
    }

}
printf("\nEncontro -> %d cons -> %d", encontro, cons);
return 0;
}
