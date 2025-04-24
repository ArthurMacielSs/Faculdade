#include <stdio.h>

int main(int argc, char *argv[]) {
    //declaração de váriaveis 
    int um, dois, tres, quatro, cinco, maior, menor, divisiveis3;

    // interação com o usuário
    printf("digite 5 números inteiros \n");
    scanf("%d\n%d\n%d\n%d\n%d", &um, &dois, &tres, &quatro, &cinco);

    //ver o maior e o menor número
    if(um == dois == tres == quatro ==cinco){
        printf("todos os números são iguais \n");}

    else {
    maior = 0;
    if (maior < um) {
        maior = um;
        printf("o maior eh %d\n" ,maior);
    }
     if (maior < dois) {
        maior = dois;
        printf("o maior eh %d\n" ,maior);
    }
     if (maior < tres) {
        maior = tres;
        printf("o maior eh %d\n" ,maior);
    }
     if (maior < quatro) {
        maior = quatro;
        printf("o maior eh %d\n" ,maior);
    } 
     if (maior < cinco) {
        maior = cinco;
        printf("o maior eh %d\n" ,maior);
    } 
    printf("Maior: %d\n", maior);
    menor = maior;
    if (menor > um) {
        menor = um;
    } 
    if (menor > dois) {
        menor = dois;
    } 
    if (menor > tres) {
        menor = tres;
    }
     if (menor > quatro) {
        menor = quatro;
    }
     if (menor > cinco) {
        menor = cinco;
    } 
    printf("Menor: %d\n", menor);
}

//ver quantos são divisíveis por 3
divisiveis3 =0;
if(um%3==0){
    divisiveis3++;
}
if(dois%3==0){
    divisiveis3++;
}
if(tres%3==0){
    divisiveis3++;
}
if(quatro%3==0){
    divisiveis3++;
}
if(cinco%3==0){
    divisiveis3++;
}
printf("Quantidade de divisiveis por 3: %d \n", divisiveis3);




    return 0; 
}
         