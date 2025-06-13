#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "address.h"

struct address *create_address(const char *input) {
    struct address *addr = (struct address *)malloc(sizeof(struct address));
    if (addr == NULL) return NULL;

    // Copiar input pois strtok modifica a string
    char *input_copy = (char *)malloc(strlen(input) + 1);
    if (input_copy == NULL) {
        free(addr);
        return NULL;
    }
    strcpy(input_copy, input);

    // Tokenizar e extrair os campos
    char *token = strtok(input_copy, "|");
    if (token == NULL) {
        free(input_copy);
        free(addr);
        return NULL;
    }

    addr->line = (char *)malloc(strlen(token) + 1);
    if (addr->line == NULL) {
        free(input_copy);
        free(addr);
        return NULL;
    }
    strcpy(addr->line, token);

    token = strtok(NULL, "|");
    if (token == NULL) {
        free(input_copy);
        free(addr->line);
        free(addr);
        return NULL;
    }
    addr->number = atoi(token);

    token = strtok(NULL, "|");
    if (token == NULL) {
        free(input_copy);
        free(addr->line);
        free(addr);
        return NULL;
    }
    addr->zipcode = atoi(token);

    free(input_copy);
    return addr;
}

void free_address(struct address *addr) {
    if (addr != NULL) {
        free(addr->line);
        free(addr);
    }
}