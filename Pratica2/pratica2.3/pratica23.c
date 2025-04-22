#include <math.h>

float laplace (float x, float u,float b) {
    return (1/(2*b))*exp(-(fabs(x-u)/b));
}