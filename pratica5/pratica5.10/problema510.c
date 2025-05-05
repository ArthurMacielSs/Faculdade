#include "problema510.h"
#include <stdio.h>
#include <math.h>

unsigned int inverte( unsigned int n){
    int armzenaDigitos, finalN, inverso, copiaN;
    unsigned int potencia;
    armzenaDigitos=0;
    inverso=0;
    copiaN=n;



    while(n>0){
        n = n/10;
        armzenaDigitos++; 
    }
    do{
        finalN= copiaN%10;
        copiaN = copiaN/10;
        potencia = pow(10.0,(armzenaDigitos-1));
        inverso= inverso + (potencia * finalN);
        armzenaDigitos--;
     } while((armzenaDigitos>=0));
     

    return inverso;
}

