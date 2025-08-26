#include "minhas_funcoes.h"
#include <stdio.h>


void testaTroca(float x, float y){
    float *Px, *Py;
    Px=&x;
    Py=&y;
    troca(Px,Py);
    printf("os valores trocados são %.4f e %.4f",x,y);
}