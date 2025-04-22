#include <math.h>

float gumbel(float x, float u, float b ){

   float z= (x-u)/b;
    return ( 1 / b) * exp(-(z + exp(-z)));
}