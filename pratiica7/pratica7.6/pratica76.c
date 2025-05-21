#include <stdio.h>

int main(int argc, char **argv[]){
int tvetor, maior, j;



scanf("%d", &tvetor);
int vetor[(tvetor)], ordenVetor[tvetor];
for(int i=0; i<(tvetor); i++){
    scanf("%d", &vetor[i]);
}

j=0;
maior=vetor[0];
for(int i=0; i<(tvetor); i++){
    if(maior<vetor[0]){
        maior=vetor[0];
    }
}
}