#include "problema55.h"

int populacao (unsigned long nHabA, double anualTaxA, unsigned long nHabB, double anualTaxB){
    int contador;
    contador =0;
    while(nHabA<nHabB){
        nHabA = nHabA * (1 + (anualTaxA/100));
        nHabB= nHabB * (1 + (anualTaxB/100));
        contador++;
    }
    return contador;
}