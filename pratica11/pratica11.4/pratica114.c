#include <stdio.h>

double mediaVetor(int v[], int n) {
    if (n == 0) {
        return v[0];  
    }
    else{
    return ((v[n - 1] + (mediaVetor(v, n - 1) * (n - 1))) / (double)n);
}
}
