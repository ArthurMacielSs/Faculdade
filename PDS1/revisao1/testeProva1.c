#include <stdio.h>


float calcularArea (float x1, float y1, float x2, float y2){
    float base, altura, area;

    if(x1>x2){
        base = x1 -x2;
    }
    else{
        base= x2-x1;
    }

    if(y1>y2){
        altura = y1-y2;
    }
    else {
        altura = y2-y1;
    }

    area = base * altura;
    return area;
}

int main(int argc, char *argv[]){
    float x1, x2, y1, y2, area;
    printf("digite o seu ponto1, o seu ponto 2\n");
    scanf("%f%f%f%f",&x1, &x2, &y1, &y2 );

    area = calcularArea(x1, y1, x2, y2);
    printf("%f", area);
}