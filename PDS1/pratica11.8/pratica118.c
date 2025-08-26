#include <stdio.h>

int menorElemento(int v[], int n) {
    if (n == 1)
        return v[0];

    int menorDoResto = menorElemento(v, n - 1);

    if (v[n - 1] < menorDoResto)
        return v[n - 1];
    else
        return menorDoResto;
}