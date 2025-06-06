#include <stdio.h>

int contaCaracteresAlfa(char string[], int tamanho){
   int  contador=0;
    for (int i=0; i<=tamanho; i++){
        if((65 <= string[i]) && (string[i] <=90)){
            contador++;
        }
        else if((97<=string[i]) && (string[i]<=122)){
            contador++;
        }

        else if((48<=string[i]) && (string[i]<=57)){
            contador++;
        }
    }
    return contador;
}

int main(){
    int tamanhoS, alfa;
    printf("digite o tamanho da string \n");
    scanf("%d", &tamanhoS);
    char string[50];
    fgets(string, 50, stdin);
    printf("teste %s\n", string);
    //alfa = contaCaracteresAlfa(string, tamanhoS);
    //printf("teste%d\n", alfa);
}