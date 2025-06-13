#include <stdio.h>
#include <math.h>

int somaCubos(int n){
    int soma;
    if (n==1){
        soma =1;
    }
    else{
        soma = pow(n, 3) + somaCubos(n-1);

        

    }
    printf("%d", soma);
    return soma;
}