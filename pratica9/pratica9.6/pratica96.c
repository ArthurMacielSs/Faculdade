#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//pq n arr**
//pq da erro se arr[][100]
void sort_strings(char arr[][12], int n) {
    char temp[100];
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            // Compare two strings by ASCII values
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                // Swap if not in order
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}


int main(int argc, char *argv[]){
    FILE *arq;
    char string[12];
    int contaL=0;

    arq = fopen("case.txt", "r");
    if(arq != NULL){
        while(fscanf(arq, "%s", string) != EOF){
            contaL++;
        }
        //printf("%d\n",contaL);
        char palavras[contaL][12];

          rewind(arq);
        
        for(int i=0; i<contaL; i++){
            //pq n pode ser apenas o palavas[i][] //ou palavras[i][12]
            fgets(palavras[i], sizeof(palavras[i]), arq);
            palavras[i][strcspn(palavras[i], "\n")] = '\0';
            printf("%s\n", palavras[i]);
        }
        sort_strings(palavras,contaL);
         for(int i=0; i<contaL; i++){
            
            
            printf("%s\n", palavras[i]);
        }



        fclose(arq);
        return 0;
    }

    
    else {
        return 1;
    }

}