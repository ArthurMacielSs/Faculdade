#include <stdio.h>
#include <stdlib.h>


int ehprimo(int numero){
     int contador=0;
    for (int i=1; i<=numero; i++){
        if(numero%i==0){
            contador++;
        }
    
}
    if(contador==2){
        return 1;
    }
    else{
        return 0;
    }


}


int main(int argc, char * argv[]){
    FILE *arq;
    int intc,soma =0, maior =0, menor =0,somaPares=0, qtdPares=0,qtdePrimos=0;
    float mediaPares =0;

    arq = fopen("case.txt", "r");
    if(arq != NULL){

        fscanf(arq,"%d", &intc);
        menor =intc;
        maior =intc;
        soma = intc;
        while(fscanf(arq,"%d", &intc) != EOF){
            if(intc>maior){
                maior =intc;
            }
            if(intc<menor){
                menor =intc;
            }
            if(intc%2==0){
                qtdPares++;
                somaPares= somaPares + intc;
                mediaPares = (float)somaPares / qtdPares;
            }
            if(ehprimo(intc)==1){
                qtdePrimos++;
            }

            soma = soma + intc;

        } 
        printf("A soma é: %d\n", soma);
        printf("O maior número é: %d\n",maior);
        printf("O menor número é: %d \n", menor);
        printf("A média dos pares é: %.2f \n", mediaPares);
        printf("O número de primos é: %d \n", qtdePrimos);
        
        fclose(arq);
        return 0;
    }

    
    else {
        return 1;
    }

}