#include <stdio.h>

int main(int argc , char * argv[]){
    int ano;
   // printf("Digite um ano:");
    scanf("%d",&ano);

    if ((ano % 4==0) && (ano %100!=0)){
        printf("O ano de %d e bissexto. \n", ano);
    }
    else if (ano % 400 ==0)
    {
        printf("O ano de %d e bissexto. \n", ano);
    }
    else{
        printf("O ano de %d nao e bissexto. \n", ano);
    } 

}