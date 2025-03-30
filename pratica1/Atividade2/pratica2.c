#include <stdio.h>

int main (int argc, char *argv[]){

    char P, D, S, traco, um;
    int soma, multiplicacao;
    P='P';
    D='D';
    S='S';
    traco='-';
    um='1';

    soma= P+D+S+traco+um;
    multiplicacao= P*D*S*traco*um;

    printf("%d\n", soma);
    printf("%d\n", multiplicacao);
    getchar();
    return 0;
}