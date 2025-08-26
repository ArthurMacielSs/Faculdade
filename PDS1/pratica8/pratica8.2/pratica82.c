#include <stdio.h>
#include <math.h>

struct ponto{
    float px;
    float py;
};
struct retangulo{
    struct ponto p1;
    struct ponto p2;
};
float calAltura (float y1, float y2){
    float altura;
    altura = y1 - y2;
    if(altura<0){
        altura = altura * -1;
    }
    return altura;
}
float calBase(float x1, float x2){
    float base;
    base = x1 - x2;
    if(base<0){
        base = base * -1;
    }
    return base;
}

float areaRet(struct ponto *p1, struct ponto *p2){
    float base, altura;

    base= calBase(p1->px, p2->px);
    altura = calAltura(p1->py, p2->py);

    return base * altura;
}

float perimetroRet(struct ponto *p1, struct ponto *p2){
    float base, altura, perimetro;

    base= calBase(p1->px, p2->px);
    altura = calAltura(p1->py, p2->py);

    perimetro = base*2 + altura*2;
    return perimetro;
    
}

float distancia(struct ponto *p1, struct ponto *p2){
    float d;
    d = sqrt(pow((p1->px-p2->px),2) + pow((p1->py-p2->py),2));
    return d;

}


int main(int argc, char * argv[]){
    struct retangulo ret1;
    float area, diagonal, perimetro;
    scanf("%f%f", &ret1.p1.px, &ret1.p1.py);

    while(1){
          scanf("%f%f", &ret1.p2.px, &ret1.p2.py);
        if (ret1.p2.px < ret1.p1.px && ret1.p2.py < ret1.p1.py) {
            break;
        }
        else{
           printf("Coordenada Invalida\n");  
        }
    }

    diagonal = distancia(&ret1.p1, &ret1.p2);
    area= areaRet(&ret1.p1, &ret1.p2);
    perimetro = perimetroRet(&ret1.p1, &ret1.p2);

    printf("%.2f\n", diagonal);
    printf("%.2f\n", area);
    printf("%.2f\n", perimetro);

    return 0;
}