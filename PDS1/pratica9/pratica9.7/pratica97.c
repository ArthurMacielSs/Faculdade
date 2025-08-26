#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 100

int main() {
    int n;
    char palavra[TAM];

    scanf("%d", &n);

    FILE *arquivo = fopen("texto.txt", "r");
    if (arquivo == NULL) {
        return 1;
    }

    while (fscanf(arquivo, "%s", palavra) == 1) {
        if (strlen(palavra) >= n) {
            printf("%s\n", palavra);
        }
    }

    fclose(arquivo);
    return 0;
}