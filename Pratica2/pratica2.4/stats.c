#include <math.h>

float cauchy (float x){
   float Pi=  3.141592;
    return  1 / (Pi * (1 + ( x*x )));
}

float gumbel(float x, float u, float b ){

    float z= (x-u)/b;
     return ( 1 / b) * exp(-(z + exp(-z)));
 }

 float laplace (float x, float u,float b) {
    return (1/(2*b))*exp(-(fabs(x-u)/b));
}