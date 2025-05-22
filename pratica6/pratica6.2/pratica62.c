#include <string.h>
#include <stdio.h>

void concatena(char *a, int n1, char *b, int n2, char *s) {
    strcat(*a,*b);
    *s=*a;
}

int main (){
         char *nome = "Um string de caracteres";
         char *str = "Um outro string de caracteres";
         strcat(nome, str);
         printf("%s", nome);
}