#include <stdio.h>

int main(int argc, char * argv){
    FILE *arq;
    int nCarac;
    char string[100];

    arq = fopen("texto.txt", "r");
    if(arq != NULL){

    scanf("%d", &nCarac);

    while(1) {  
        if(fscanf(arq,"%s", string)==EOF){
            break;
        }
        else{
            
        }
    
        
        
    }
       



        fclose(arq);
        return 0;
    }

    
    else {
        return 1;
    }

}