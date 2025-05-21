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
    maiorColuna=0;
       for (int i=0; i<numLinhas; i++){
        for (int j=0; j<numColunas; j++){
            if(maiorelemento<matriz[i][j]){
                maiorelemento=matriz[i][j];
                maiorColuna=j;
                
            }
            else if(maiorelemento==matriz[i][j]){
                if(maiorColuna>j){
                    maiorColuna=j;
                }

            }
        }
    }
    //printf("%d\n", maiorelemento);
    printf("%d\n", maiorColuna);
    
}