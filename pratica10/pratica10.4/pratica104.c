#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "user.h"
#include "address.h"

struct user **create_user_database(int n) {
    struct user **db = (struct user **)malloc(sizeof(struct user *) * n);
    if (db == NULL) return NULL;

    char buffer[256];
    for (int i = 0; i < n; i++) {
        if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
            for (int j = 0; j < i; j++) {
                free_user(db[j]);
            }
            free(db);
            return NULL;
        }

        buffer[strcspn(buffer, "\n")] = '\0';

        db[i] = create_user(buffer);
        if (db[i] == NULL) {
            for (int j = 0; j < i; j++) {
                free_user(db[j]);
            }
            free(db);
            return NULL;
        }
    }

    return db;
}

void free_user_database(struct user **db, int n) {
    if (db == NULL) return;

    for (int i = 0; i < n; i++) {
        if (db[i] != NULL) {
            free_user(db[i]);
        }
    }
    free(db);
}
