#include <stdio.h>

void par_ou_impar( int num){
    
   /*printf("digite um numero inteiro: ");
    scanf("%d",&num);*/

    if (num<=0){
        printf("ERRO: numero invalido\n");
    }
    else{
        if(num%2==0){
            printf(" %d e par\n",num);
        }
        else{
            printf("%d e impar \n", num);
        }
    }
}