#include <stdio.h>
#include "minhas_funcoes.h"

int main() {
    /* ---- teste da função soma1 ---- */

    int x;
    printf("\nDigite um valor inteiro: ");
    scanf("%d", &x);

    int * xx;
    xx =&x;

    // Complete o código abaixo:
    soma1(xx);
    printf("\nValor depois de chamar a função: %d", x);

    /* ---- teste da função troca ---- */

    float a, b;

    printf("\nDigite os valores para troca: ");
    scanf("%f %f", &a, &b);
    float *aa, *bb;
    aa =&a; 
    bb=&b;

    // Complete o código abaixo:
    troca(aa,bb);

    printf("\nValores depois de chamar a função: %.4f %.4f", a, b);

 
    long long int tel;

    printf("\nDigite o telefone: ");
    scanf("%lld", &tel);
    printf("\nDDD: %d", ddd(tel));

    return 0;
}