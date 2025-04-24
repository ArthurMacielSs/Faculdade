#include <stdio.h>

void calculadora(float a, char sinal, float b){
    float resultado;
    switch (sinal){
        case'+':
        resultado= a + b;
        printf("%.2f %c %.2f= %.2f", a, sinal, b, resultado);
        break;
        case'-':
        resultado= a -b;
        printf("%.2f %c %.2f= %.2f", a, sinal, b, resultado);
        break;
        case'*':
        resultado= a*b;
        printf("%.2f %c %.2f= %.2f", a, sinal, b, resultado);
        break;
        case'/':
        if(b==0){
            printf("Erro! Divisão por zero não é permitida.\n");
        }
        else{
            resultado = a/b;
            printf("%.2f %c %.2f= %.2f", a, sinal, b, resultado);
        }
        break;
        default:
        printf("Operador inválido!\n");
    }

}


int main(int argc, char*argv[]){
    float a, b;
    char sinal;
    scanf("%f %c %f", &a, &sinal, &b);
    calculadora(a,sinal,b);
}