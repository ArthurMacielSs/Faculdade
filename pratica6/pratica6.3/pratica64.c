#include <stdio.h>

int main(int argc, char** argv[]){
    int tamanho, i, contador; 
    contador=0;
    tamanho = 50;
    //char *string;
    char string[tamanho];
    //char string[];
    
    fgets(string, tamanho, stdin);
    for (i=0; i<=tamanho; i++){
        if ( string[i] ==  ' '){
            contador++;
            //printf("a\n");
        }
       else if( string[i] == '\0'){
            contador++;
            break;
        }
    }
    //contador++;
    printf("%d\n", contador);
    return 0;
}