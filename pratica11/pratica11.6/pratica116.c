#include <stdio.h>
#include <string.h>

void imprimeInvertida(char str[]){
    int tam=strlen(str);
    if(tam==1){
       printf("%c", str[tam-1]);
        return;
    }
    else{
        printf("%c", str[(tam-1)]);
        str[tam-1]='\0';
        imprimeInvertida(str);
    }
}