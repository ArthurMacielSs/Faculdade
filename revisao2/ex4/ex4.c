#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void frequencia_str(const char* dados_brutos){
    int tamanho = strlen(dados_brutos);
    int contador=1;
    char stringT[tamanho];
    int indcStringT=0;

    for(int i=0; i<=tamanho; i++){
        for(int j=0; j<=tamanho; j++){
            
            if(dados_brutos[i]==dados_brutos[j]){
            contador++;
        }
        
    }
        stringT[indcStringT]==dados_brutos[i];
        for(int z =0; z<=strlen(stringT); z++){
            if(dados_brutos[i]==stringT[z]){
                
            }
        }
        printf("%c aparece  %d vezes \n", dados_brutos[i], contador);
        contador =0;
       
    }
}

int main() {
 printf("--- Teste 1 ---\n");
 frequencia_str("PDS1PDS1PDS1 ");
 return 0;
}