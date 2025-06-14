#include <stdio.h>

struct atleta {
    char nome[16];
    char esporte[16];
    int idade;
    float altura;
};

int main() {
    struct atleta lista[5], temp;

    for (int i = 0; i < 5; i++) {
        scanf("%15s %15s %d %f", lista[i].nome, lista[i].esporte, &lista[i].idade, &lista[i].altura);
    }

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (lista[i].idade < lista[j].idade) {
                temp = lista[i];
                lista[i] = lista[j];
                lista[j] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%d- %s\n", i + 1, lista[i].nome);
    }

    return 0;
}