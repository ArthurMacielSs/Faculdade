#include <math.h>

float loglcdf(float x, float a, float b){
    if(x>=0){
        return 1/(1+pow((x/a),b));
    }
    else{
        return 0;
    }
}