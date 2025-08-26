#include "problema58.h"

int mdc(int a, int b){
    if(a>b){
       for (unsigned int i = a; i >=1; i--) {
           if ((a % i == 0) && (b%i==0)) {
               return i;
               break;
           }  
        }  
     }
   else if(b>a){
        for (unsigned int i = b; i >=1; i--) {
             if ((a % i == 0) && (b%i==0)) {
                  return i;
                  break;
           }
       }
    }
    else if(b==a){
        return b;
}
}