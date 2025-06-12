#include <stdio.h>
#include <string.h> 

int main(int argc, char *argv[]){
    FILE *arq;
    int confereL =1, idMaisVelho=0, idMaisNovo=0, compara =0;
    char maisVelho[100], maisNovo[100], teste[100], verifica[100];

    arq = fopen("case.txt", "r");

    if(arq != NULL){
        while(fscanf(arq,"%s", teste) != EOF){
        if(confereL%2 != 0){
            fscanf(arq, "%s", teste);
            printf("%s\n", teste);
            confereL++;
        }
        if(confereL%2==0){
            fscanf(arq, "%d", &compara);
            if(compara<idMaisNovo){
                idMaisNovo=compara;
                 strcpy(maisNovo, teste);
                 confereL++;

            }
            else if(compara>idMaisVelho){
                idMaisVelho=compara;
                strcpy(maisVelho, teste);
                confereL++;
            }
        }

        } 

        printf("a %s\n", maisVelho);
        printf("b %s\n", maisNovo);

        fclose(arq);
        return 0;
    }

    
    else {
        return 1;
    }

}