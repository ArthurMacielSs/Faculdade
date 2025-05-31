#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int geraAleatorio(int maior){
    int numero = rand() % (maior);
    return numero;
}

void iniciaAleatoriamente(int m, int n, int matriz[][n], int inicio,int final){
int numero;

for (int i=0; i<m; i++){
    for (int j=0; j<n; j++) {
        numero = inicio + geraAleatorio(final);
        matriz[i][j]= numero;
    }
}

}

void imprimeMatriz(int linhas, int colunas, int matriz[][colunas]){
    printf("\n");
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void copiaM(){
    printf("AA");
}



void contaZeros(int linhas, int colunas, int matriz[][colunas]){
    int conta =0;
    for (int i=0; i<linhas; i++){
        for (int j=0; j<colunas; j++){
            if(matriz[i][j]==0){
                conta++;
            }
        }
    }
    printf("%d\n", conta);
}



void imprimeZeros(int linhas, int colunas, int matriz[linhas][colunas]) {
    int matriz2[linhas][colunas];

    // Copy original matrix
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz2[i][j] = matriz[i][j];
        }
    }

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas - 2; j++) {
            if (matriz[i][j] == matriz[i][j + 1] && matriz[i][j] == matriz[i][j + 2]) {
                matriz2[i][j] = 0;
                matriz2[i][j + 1] = 0;
                matriz2[i][j + 2] = 0;
            }
        }
    }

    for (int j = 0; j < colunas; j++) {
        for (int i = 0; i < linhas - 2; i++) {
            if (matriz[i][j] == matriz[i + 1][j] && matriz[i][j] == matriz[i + 2][j]) {
                matriz2[i][j] = 0;
                matriz2[i + 1][j] = 0;
                matriz2[i + 2][j] = 0;
            }
        }
    }

    contaZeros(linhas, colunas, matriz2);
}





int main(int argc, char * argv[]){

int m, n, k;
int inicioIntervalo=1;
printf("digite os valores de m, n e k\n");
scanf("%d %d %d", &m, &n, &k);
while(m>100 || n>100){
    printf("valores invalidos, m e n não podem ser maiores que 100, digite-os novamente\n");
    scanf("%d %d", &m, &n);

}
srand((unsigned)time(NULL));


int matriz[m][n];

iniciaAleatoriamente(m, n,matriz, inicioIntervalo, k);
imprimeMatriz(m, n, matriz);
imprimeZeros(m,n,matriz);

}