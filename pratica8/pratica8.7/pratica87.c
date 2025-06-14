#include <stdio.h>
#include <string.h>

struct data {
    int dia;
    int mes;
    int ano;
};

struct evento {
    char nome[51];
    char local[51];
    struct data d;
};

int main() {
    struct evento lista[100];
    int n, dia, mes, ano;
    int achou = 0;

    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
        fgets(lista[i].nome, 51, stdin);
        lista[i].nome[strcspn(lista[i].nome, "\n")] = '\0';

        fgets(lista[i].local, 51, stdin);
        lista[i].local[strcspn(lista[i].local, "\n")] = '\0';

        scanf("%d %d %d", &lista[i].d.dia, &lista[i].d.mes, &lista[i].d.ano);
        getchar();
    }

    scanf("%d %d %d", &dia, &mes, &ano);

    for (int i = 0; i < n; i++) {
        if (lista[i].d.dia == dia && lista[i].d.mes == mes && lista[i].d.ano == ano) {
            printf("%s\n", lista[i].nome);
            printf("%s\n", lista[i].local);
            achou = 1;
        }
    }

    if (!achou) {
        printf("Nenhum evento encontrado!\n");
    }

    return 0;
}
