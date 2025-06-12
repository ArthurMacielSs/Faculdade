#include <stdio.h>

int main(int argc, char * argv){
    FILE *arq;


    arq = fopen("case.txt", "r");
    if(arq != NULL){

        fclose(arq);
        return 0;
    }

    
    else {
        return 1;
    }

}