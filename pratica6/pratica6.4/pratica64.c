#include <stdio.h>
#include <string.h>

int main(int argc, char** argv[]){
    int tamanho, i, contador, j; 
    contador = 0;
    tamanho = 50;
    j = 0;

    char string[tamanho], string2[tamanho];
    
    fgets(string, tamanho, stdin);
    contador = strlen(string);

    for (i = contador - 1; i >= 0; i--){  
        string2[j] = string[i];
        //printf("%c\n", string[i]);
     //   printf("%d\n", j);
    //    printf(" %c\n", string2[j]);
        j++;
    }

    string2[j] = '\0';  
    printf("%s\n", string2);

    return 0;
}

