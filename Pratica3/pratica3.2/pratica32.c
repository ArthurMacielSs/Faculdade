#include "minhas_funcoes.h"
int testaSoma1 (int x){
    int *p;
    p =&x;
    soma1(p);
    return *p;
}

