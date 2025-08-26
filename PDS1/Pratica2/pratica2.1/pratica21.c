#include <stdio.h>
#include <math.h>

float cauchy (float x){
   float Pi=  3.141592;
    return  1 / (Pi * (1 + ( x*x )));
}