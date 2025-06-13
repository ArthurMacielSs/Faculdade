#include <stdio.h>
#include <string.h> 
#include <stdlib.h>

int main() {
    FILE *arq;
    int confereL = 1, idadeMaisVelho = -1, idadeMaisNovo = 9999, idadeAtual;
    char maisVelho[100], maisNovo[100], linha[100], nomeAtual[100];

    arq = fopen("case.txt", "r");

    if (arq != NULL) {
        while (fgets(linha, sizeof(linha), arq)!= NULL) {
            linha[strcspn(linha, "\n")] = 0; // remove newline

            if (confereL % 2 != 0) {
                strcpy(nomeAtual, linha);
            } else {
                idadeAtual = atoi(linha);

                if (idadeAtual > idadeMaisVelho) {
                    idadeMaisVelho = idadeAtual;
                    strcpy(maisVelho, nomeAtual);
                }

                if (idadeAtual < idadeMaisNovo) {
                    idadeMaisNovo = idadeAtual;
                    strcpy(maisNovo, nomeAtual);
                }
            }
            confereL++;
        }

        printf("Mais velho: %s (%d anos)\n", maisVelho, idadeMaisVelho);
        printf("Mais novo: %s (%d anos)\n", maisNovo, idadeMaisNovo);

        fclose(arq);
        return 0;
    } else {
        perror("Erro ao abrir o arquivo");
        return 1;
    }
}
