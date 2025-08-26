#include <stdio.h>
#include <math.h>
struct cordenadas
 {
    float x;
    float y;
};



int main(int argc, char *argv[]){
    double distancia;
    struct cordenadas c1, c2;
    scanf("%f%f%f%f", &c1.x, &c1.y, &c2.x, &c2.y);

    distancia = sqrt(pow((c2.x-c1.x),2) + pow((c2.y-c1.y),2));

    printf("%.2lf\n",distancia);


    
}
