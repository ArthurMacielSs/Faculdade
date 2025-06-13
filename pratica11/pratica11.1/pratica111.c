#include <stdio.h>

void imprimeNaturais(int N){
    if(N==0){
        printf("0");
        return;
    }
    else{
        printf("%d\n", N);
        imprimeNaturais(N-1);
    }

}