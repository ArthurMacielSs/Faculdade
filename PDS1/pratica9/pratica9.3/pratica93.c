#include <stdio.h>

int Mdc (int a, int b){
    int resto;
    while(b !=0){
     resto =  a % b;
     a = b;
     b = resto;
    }
    return a;
}

int main(int argc, char *argv[]){
    FILE *arq;
    int n[4];
    int mdc[2];
    int finalMdc;
    int verifica;

    arq = fopen("case.txt", "r");

    if(arq != NULL){
        verifica =fscanf(arq, "%d %d %d %d", &n[0], &n[1], &n[2], &n[3]);
        if ( verifica != 4){
            printf("arquivo com uma quantidade invalida de parametros \n");
            fclose(arq);
            return 1;
        }
        else{

            mdc[0] = Mdc( n[0], n[1]);
            mdc[1] =Mdc(n[2], n[3]);
            finalMdc= Mdc(mdc[0], mdc[1]);

            printf("%d\n", finalMdc);
        }

        fclose(arq);
        return 0;
    }
    else{
        return 1;
    }
}