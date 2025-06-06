#include <stdio.h>
#include <string.h>


//int contacaracteresalfa (char a[], int tam){
int contacaracteresalfa (char *a, int tam){
    int contador=0;
    if(tam>strlen(a)){
        tam=strlen(a);
    }
    for(int i=0; i<=tam; i++){
        if((a[i]>=48)&&(a[i]<=57)){
            printf("%c\n", a[i]);
            contador++;
        }
        else if((a[i]>=65)&&(a[i]<=90)){
            contador++;
            printf("%c\n", a[i]);
        }
          else if((a[i]>=97)&&(a[i]<=122)){
            contador++;
            printf("%c\n", a[i]);
        }
    }
    
return contador;
}



int main(int argc, char* argv[]){
    int tamanho, contador;
    char lixo;


    printf("digite o tamanho\n");
    scanf("%d%c", &tamanho, &lixo);
    
    char string[20];

    printf("digite sua string\n");
    fgets(string,20,stdin); 

    
    
    contador=contacaracteresalfa(string,tamanho);
    printf("existem %d caracteres alfanumericos\n", contador);


}

