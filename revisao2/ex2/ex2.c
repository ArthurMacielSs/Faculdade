#include <stdio.h>

int geraAleatorio(int menor, int maior){
    int aleatorio =rand();
    int numero = aleatorio % (maior - menor +1);
    numero++;
    return numero;
}

void iniciaAleatoriamente(int m, int n, int matriz[][n], int inicio,int final){
int numero = geraAleatorio(inicio, final);

for (int i=0; i<=m; i++){
    for (int j=0; j<=n; j++){
        matriz[i][j]= numero;
    }
}

}

void imprimeMatriz(int linhas, int colunas, int matriz[][colunas]){
    printf("\n");
}

void copiaM(){
    printf("AA");
}



void contaZeros(int linhas, int colunas, int matriz[][colunas]){
    int conta =0;
    for (int i=0; i<=linhas; i++){
        for (int j=0; j<=colunas; j++){
            if(matriz[i][j]==0){
                conta++;
            }
        }
    }
    printf("%d", conta);
}



void imprimeZeros(int linhas, int colunas,int matriz[linhas][colunas]){
    int matriz2[linhas][colunas];

    for (int i=0; i<=linhas; i++){
        for(int j=0; j<=colunas; j++){
            matriz2[i][j]=matriz[i][j];
        }
    }
    for (int i=0; i<=linhas; i++){
        for (int j=0; j<=colunas; j++){
            if ((matriz[i][j]==matriz[i][j+1])&&(matriz[i][j]==matriz[i][j+2])){
                matriz2[i][j]=0;
                matriz2[i][j+1]=0;
                matriz2[i][j+2]==0;
            }
        }
    }
    for(int i=0; i<=colunas; i++){
        for (int j=0; j<=linhas; j++){
            if((matriz[j][i]==matriz[j][i+1]) && (matriz[j][i]==matriz[j][i+2])){
                matriz2[j][i] =0;
                matriz2[j][i + 1]=0;
                matriz2[j][i+2]=0;
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


int matriz[m][n];

iniciaAleatoriamente(m, n,matriz, inicioIntervalo, k);
imprimeMatriz(m, n, matriz);

}