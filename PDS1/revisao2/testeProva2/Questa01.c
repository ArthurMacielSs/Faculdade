#include <stdio.h>
#include <string.h>

void posicionar_navios(char tabuleiro[12][12], char *navios[], int n) {
    // Initialize board with '.'
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            tabuleiro[i][j] = '.';
        }
    }

    char nomes[n][20];
    int linhas[n], colunas[n];

    for (int i = 0; i < n; i++) {
        sscanf(navios[i], "%s %d %d", nomes[i], &linhas[i], &colunas[i]);

        if (strcmp(nomes[i], "corveta") == 0) {
            tabuleiro[linhas[i]][colunas[i]] = 'N';
        }
        else if (strcmp(nomes[i], "fragata") == 0) {
            tabuleiro[linhas[i]][colunas[i]] = 'N';
            tabuleiro[linhas[i]][colunas[i] + 1] = 'N';
        }
        else if (strcmp(nomes[i], "porta-aviao") == 0) {
            tabuleiro[linhas[i]][colunas[i]] = 'N';
            tabuleiro[linhas[i]][colunas[i] + 1] = 'N';
            tabuleiro[linhas[i]][colunas[i] + 2] = 'N';
        }
    }
}



void imprimir_tabuleiro(char board[12][12]) {
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

int verificar_tiro(char tabuleiro[12][12],int linha, int coluna){
    if((linha>12)||(coluna>12)){
        printf("digite a linha e coluna novamente\n");
        scanf("%d %d", &linha, &coluna); 
    }
    else{
        for(int i=0; i<12; i++){
            for (int j=0; j<12; j++){
                if((i==linha)&&(j==coluna)){
                    if(tabuleiro[i][j]=='N'){
                        tabuleiro[i][j]='X';
                        return 1;
                    }
                    
                }
            }
        }
    }
    return 0;
}

int main() {
    char tabuleiro[12][12];

    char *navios[] = {
        "corveta 2 3",
        "fragata 5 5",
        "porta-aviao 8 1"
    };

    int total_navios = 3;

    posicionar_navios(tabuleiro, navios, total_navios);

    printf("Initial board:\n");
    imprimir_tabuleiro(tabuleiro);

    printf("\nFiring at (2, 3): ");
    printf(verificar_tiro(tabuleiro, 2, 3) ? "Hit!\n" : "Miss.\n");

    printf("Firing at (0, 0): ");
    printf(verificar_tiro(tabuleiro, 0, 0) ? "Hit!\n" : "Miss.\n");

    printf("Firing at (5, 6): ");
    printf(verificar_tiro(tabuleiro, 5, 6) ? "Hit!\n" : "Miss.\n");

    printf("Firing at (13, 6): ");
    printf(verificar_tiro(tabuleiro, 13, 6) ? "Hit!\n" : "Miss.\n");

    printf("\nBoard after shots:\n");
    imprimir_tabuleiro(tabuleiro);

    return 0;
}

