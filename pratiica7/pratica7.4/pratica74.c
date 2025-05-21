#include <stdio.h>

int main(int argc, char **argv[]){
    int numColunas, numLinhas, maiorelemento, maiorColuna;

    scanf("%d", &numLinhas);
    scanf("%d", &numColunas);

    int matriz[numLinhas][numColunas];

    for (int i=0; i<numLinhas; i++){
        for (int j=0; j<numColunas; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    maiorelemento= matriz[0][0];
       for (int i=0; i<numLinhas; i++){
        for (int j=0; j<numColunas; j++){
            //matriz[i][j];
        }
    }
    printf("%d\n", maiorelemento);
}