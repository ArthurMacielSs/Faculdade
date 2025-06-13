#include <stdio.h>
#include <string.h>

void imprimeInvertida(char str[]){
    int tam=strlen(str);
    if(tam==2){
       // printf("%s", str);
       printf("%c", str[tam-1]);
        return;
    }
    else{
        printf("%c", str[(tam-1)]);
        str[tam-1]='\0';
        imprimeInvertida(str);
    }
}