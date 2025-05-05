#include "problema59.h"

int soma_digitos_pares(unsigned int n){
    int digito, soma;
    soma=0;
    while (n>0)  {
        digito=n % 10;
        if(digito%2==0){
            soma= soma + digito;
        }
     n /=10;
    } 
    return soma;          
}