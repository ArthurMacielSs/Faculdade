#include <stdio.h>
#include <string.h>

void frequencia_str(const char dados_brutos[]) {
    int tamanho = strlen(dados_brutos);
    int contador;
    char jaContado[256] = {0}; // Array para verificar se o caractere já foi contado

    for (int i = 0; i < tamanho; i++) {
        char atual = dados_brutos[i];

        if (jaContado[(unsigned char)atual]) {
            continue; // Pula se já contou esse caractere
        }

        contador = 0;

        for (int j = 0; j < tamanho; j++) {
            if (dados_brutos[j] == atual) {
                contador++;
            }
        }

        jaContado[(unsigned char)atual] = 1;

        printf("%c aparece %d vezes\n", atual, contador);
    }

    printf("\n");
}

int main() {
    printf("--- Teste 1 ---\n");
    frequencia_str("PDS1PDS1PDS1");
    return 0;
}
