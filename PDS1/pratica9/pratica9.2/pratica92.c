#include <stdio.h>

int main(int argc, char *argv[]){
        FILE *arq;
        float inicio, fim, intervalo;
        float farenheit,kelvin;
        arq = fopen("case.txt", "r");

        if(arq!=NULL){
            fscanf(arq, "%f%f%f", &inicio, &fim, &intervalo);
            while(inicio <= fim){
                farenheit = (inicio * 9/5) +32;
                kelvin = inicio +273;
                printf("%.0f %.0f %.0f\n", inicio, farenheit, kelvin);
                inicio= inicio + intervalo;
            }
            fclose(arq);
            return 0;
        }
        else{
            return 1;
        }
}