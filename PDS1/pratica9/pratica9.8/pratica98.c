#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo = fopen("datas.txt", "r");
    if (arquivo == NULL) return 1;

    int dia, mes, ano;
    int dia_max = 0, mes_max = 0, ano_max = 0;

    while (fscanf(arquivo, "%d/%d/%d", &dia, &mes, &ano) == 3) {
        if (ano > ano_max ||
           (ano == ano_max && mes > mes_max) ||
           (ano == ano_max && mes == mes_max && dia > dia_max)) {
            dia_max = dia;
            mes_max = mes;
            ano_max = ano;
        }
    }

    printf("%02d/%02d/%04d\n", dia_max, mes_max, ano_max);
    fclose(arquivo);
    return 0;
}