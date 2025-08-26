#include <stdio.h>

/*imprimeinversa(int *matriz[][],int numCol, int numLinha){
 for (int i=0; i<numLinha; i++){
        for (int j=0; j<numCol; j++){
           matriz[i][j] = matriz[i][j]*-1;
        }
    }
}*/

int main(int argc, char **argv[]){
    int numColunas, numLinhas;

    scanf("%d", &numLinhas);
    scanf("%d", &numColunas);

    int matriz[numLinhas][numColunas];

    for (int i=0; i<numLinhas; i++){
        for (int j=0; j<numColunas; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i=0; i<numLinhas; i++){
        for (int j=0; j<numColunas; j++){
             matriz[i][j] = matriz[i][j]*-1;
             printf("%d\n", matriz[i][j]);
        }
    }
   

    //imprimeinversa(matriz, numColunas, numLinhas);

}