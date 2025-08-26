#include <stdio.h>
#include <stdlib.h>

#define impostoMG  7
#define impostoSP  12
#define impostoRj 15
#define impostoMs  8

void Tax (char place, float value){
    float newValue;
    switch (place){
        case 'G':
         newValue= value *(1.0+(impostoMG/100.0));
         printf("O valor em MG seria de R$%.2f", newValue);
         break;
        case 'P':
        newValue= value *(1+(impostoSP/100.0));
        printf("O valor em SP seria de R$%.2f", newValue);
        break;
        case 'J':
        newValue= value *((1+impostoRj/100.0));
        printf("O valor em RJ seria de R$%.2f", newValue);
        break;
        case 'S':
        newValue= value *(1+(impostoMs/100.0));
        printf("O valor em MS seria de R$%.2f", newValue);
        break;
        default:
        printf("Estado Invalido \n");
        exit(1);
    }
}

int main(int argc, char*argv[]){
 char place;
 float value, newValue;

 scanf("%f %c",&value, &place);


 Tax(place, value);


}