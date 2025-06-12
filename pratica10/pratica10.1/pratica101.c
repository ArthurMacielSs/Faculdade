#include <stdio.h>
#include <stdlib.h>

float *read_array(int *n){
    float *array;
    scanf("%d", n);
    array = (float*)malloc(sizeof(float) * *n);
    for(int i=0; i<*n; i++){
        scanf("%f", &array[i]);
    }
    return array;
}


void free_array (float *array){
    free(array);
}