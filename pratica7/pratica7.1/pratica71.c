#include <stdio.h>

int main(int argc, char **argv[]){
    int tamanho; 
    //printf("digite o tamanho do seu vetor\n");
    scanf("%d", &tamanho);

    int vetor[tamanho], vetorOrd[tamanho], j;
    j= tamanho;

    for (int i= 0; i<tamanho; i++){
       // printf("digite o vetor na posição %d \n", i);
        scanf("%d", &vetor[i]);
       
    }
    for (int i=0; i<tamanho; i++){
        vetorOrd[i]=vetor[j-1];
        j--;
    }
    for (int i = 0; i <tamanho; i++)
    {
        printf("%d\n", vetorOrd[i]);
    }
    
}
