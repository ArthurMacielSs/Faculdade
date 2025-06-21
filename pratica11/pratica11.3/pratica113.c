int somaVetor(int v[], int n) {
    if (n == 0) {
        return 0; 
    }
    else {
    return v[n - 1] + somaVetor(v, n - 1); 
    }
}