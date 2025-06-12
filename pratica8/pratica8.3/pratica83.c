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

float verificaPonto(struct retangulo ret1, struct ponto p1)
{
    if(((p1.px>=ret1.p1.px) && (p1.px<=ret1.p2.px)) && ((p1.py<=ret1.p1.py)&&(p1.py>=ret1.p2.py))) {
        return 1;
    }
    else{
        return 0;
    }
    
};


int main(int argc, char * argv[]){
    struct retangulo ret1;
    struct ponto ponto1;

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

    scanf("%f%f", &ponto1.px, &ponto1.py);

    if(verificaPonto(ret1,ponto1)==1){
        printf("O ponto pertence ao retangulo\n");
    }
    else{
        printf("O ponto nao pertence ao retangulo\n");
    }

    return 0;
}