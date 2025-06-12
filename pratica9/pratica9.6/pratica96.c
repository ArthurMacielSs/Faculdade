#include <stdio.h>

int main(int argc, char *argv[]){
    FILE *arq;
    char string[12];
    int contaL=0;

    arq = fopen("case.txt", "r");
    if(arq != NULL){
        while(fscanf(arq, "%s", string) != EOF){
            contaL++;
        }
        printf("%d\n",contaL);
        char palavras[contaL][12];
        
        for(int i=0; i<contaL; i++){
            fgets(palavras[i][], 12, arq);
            printf("%s", palavras[i]);
        }

        fclose(arq);
        return 0;
    }

    
    else {
        return 1;
    }

}