#include "problema57.h"

unsigned int soma_divisores(unsigned int n) {
    unsigned int soma = 0;
    for (unsigned int i = 1; i <= n; i++) {
        if (n % i == 0) {
            soma += i;
        }
    }
    return soma;
}