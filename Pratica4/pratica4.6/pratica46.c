#include <stdio.h>

int verificaTriangulo(float ladoA, float ladoB, float ladoC){
    if((ladoA < ladoB + ladoC) && (ladoB<ladoA + ladoC) && (ladoC<ladoB+ladoA)){
        return 0;
    }
    else {
        return 1;
    }
}

void tipoDeTriangulo (float ladoA, float ladoB, float ladoC){
    if ((ladoA==ladoB) && (ladoA==ladoC)){
        printf("Triangulo  equilatero\n");
    }
    else if ((ladoA== ladoB)|| (ladoB==ladoC)||(ladoA==ladoC))
    {
        printf("Triangulo isosceles\n");
    }
    else 
    {
        printf("Triangulo escaleno\n");
    }
    
}

int main(int argc, char *argv){
    float a, b,c;
    int verifica;
    scanf("%f\n%f\n%f", &a, &b, &c);
    if((a<=0)||(b<=0)||(c<=0)){
        printf("Valores invalidos\n");
    }
    else{
    verifica=verificaTriangulo(a,b,c);
    if(verifica==0){
        tipoDeTriangulo(a,b,c);
    }
    else{
        printf("Triangulo invalido\n");
    }
}
    
}