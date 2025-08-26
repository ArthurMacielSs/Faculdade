#include "minhas_funcoes.h"
#include <math.h>
#include <stdio.h>

int ddd(long long x ){
    return x/pow(10.0,9.0);
}
void soma1(int*a){
    *a=*a+1;
    

} 
int testaSoma1 (int x){
    int *p;
    p =&x;
    soma1(p);
    return *p;
}

void troca(float *end_valor1,float *end_valor2){
    float a;
    a= *end_valor1;
    *end_valor1= *end_valor2;
    *end_valor2= a;
}


void testaTroca(float x, float y){
    float *Px, *Py;
    Px=&x;
    Py=&y;
    troca(Px,Py);
    printf("os valores trocados são %.4f e %.4f",x,y);
}