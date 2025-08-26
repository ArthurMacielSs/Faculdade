#include <stdio.h>

void preencher_pascal(int n, int matriz[n][n]) {
    for (int i = 0; i < n; i++) {
        matriz[i][0] = 1;
        for (int j = 1; j <= i; j++) {
            matriz[i][j] = matriz[i - 1][j - 1] + matriz[i - 1][j];
        }
    }
}

void triangulo_pascal(int n) {
    int matriz[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            matriz[i][j] = 0;

    preencher_pascal(n, matriz);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    triangulo_pascal(n);
    return 0;
}
