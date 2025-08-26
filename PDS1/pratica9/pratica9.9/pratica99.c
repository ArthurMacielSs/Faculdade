#include <stdio.h>

int main(int argc, char * argv[]){
    FILE *arq;
    char linha[200];
    char nome[200];
    int notas[4];
    float media;

    arq = fopen("notas.txt", "r");
    if(arq != NULL){
        while(fgets(linha,200, arq)!=NULL){
        sscanf(linha,"%s %d %d %d %d",nome, &notas[0], &notas[1], &notas[2], &notas[3]);
        media= (notas[0] + notas[1] + notas[2] + notas[3])/4;
        if(media>=60){
            printf(" nome: %s - Média: %f\n", nome, media);
            
        }
        }

        fclose(arq);
        return 0;
    }

    
    else {
        return 1;
    }

}