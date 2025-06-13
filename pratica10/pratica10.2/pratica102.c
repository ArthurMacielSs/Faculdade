#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "address.h"

/*struct address {
    char *line;
    int number;
    int zipcode;
};*/


struct address *create_address(const char *input){
    struct address *est;
    int  tamanhoINPT = strlen(input), tamRua;
    
    est = (struct address *)malloc(sizeof(struct address));
    //e não *est
    if(est==NULL) return NULL;

    // como input é uma const char, não podemos usar o strtok nela
    char *input_copy = malloc(strlen(input) + 1);
    if (input_copy == NULL) {
        free(est);
        return NULL;
    }
    strcpy(input_copy, input);

        
    char *lin =strtok(input_copy,"|");
    char *numb =strtok(NULL,"|");
    char * zipcod= strtok(NULL,"|");
    
    // é necessário fazer isso para alocar apenas a qtd certa de memória e n dar erro de buffer
    tamRua=strlen(lin);

    est->line= malloc(sizeof(char)* tamRua);
    if(est->line==NULL) return NULL;
    
    strcpy(est->line, lin);
    est->number=atoi(numb);
    est->zipcode=atoi(zipcod);

    free(input_copy);
    //muito importante, sem ela dá erro de memória

    return est;
}


void free_address(struct address *addr){
    free(addr->line);
    free(addr);

}


/*struct address *create_address(const char *input) {
    struct address *addr = malloc(sizeof(struct address));
    if (addr == NULL) return NULL;

    // Create a modifiable copy of the input
    char *input_copy = malloc(strlen(input) + 1);
    if (input_copy == NULL) {
        free(addr);
        return NULL;
    }
    strcpy(input_copy, input);

    // Tokenize the string
    char *line = strtok(input_copy, "|");
    char *number_str = strtok(NULL, "|");
    char *zipcode_str = strtok(NULL, "|");

    if (line == NULL || number_str == NULL || zipcode_str == NULL) {
        free(input_copy);
        free(addr);
        return NULL;
    }

    // Allocate and copy the line string
    addr->line = malloc(strlen(line) + 1);
    if (addr->line == NULL) {
        free(input_copy);
        free(addr);
        return NULL;
    }
    strcpy(addr->line, line);

    addr->number = atoi(number_str);
    addr->zipcode = atoi(zipcode_str);

    free(input_copy); // no longer needed
    return addr;
}*/
