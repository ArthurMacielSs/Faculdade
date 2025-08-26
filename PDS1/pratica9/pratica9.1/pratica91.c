#include <stdio.h>
#include <string.h>

#define MAXTAM 1000

int main(int argc, char *argv[]){

    FILE *arq;
    //char *line, *bigLine;
    char line[MAXTAM], bigLine[MAXTAM];
    int tam, bigTam =0;

    bigLine[0]='\0';
    arq = fopen("texto.txt", "r");
    
    if(arq != NULL){
        while(fgets(line, MAXTAM, arq) != NULL){
            tam= strlen(line); 

            if (tam > 0 && line[tam - 1] == '\n') {
                line[tam - 1] = '\0'; 
                tam--;                
            }

            if (tam>bigTam){
                strcpy(bigLine, line);
                 bigTam=tam; 
                
            }
        }
        printf("%s\n", bigLine);
        printf("%d\n", bigTam);
        fclose(arq);
        return 0;
        
    }
    else{
        printf("\n programa fechado");
        return 1;
    }
}





