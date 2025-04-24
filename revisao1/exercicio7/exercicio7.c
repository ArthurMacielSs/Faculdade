#include <stdbool.h>

bool ehpar(int n){
    if(n%2==0){
        return true;
    }
    else{
        return false;
    }
}

int hotpo(unsigned int n) {
    if (ehpar(n)){
        n=n/2;
    }
    else{
        n=(n*3)+1;
    }
    return n;
}