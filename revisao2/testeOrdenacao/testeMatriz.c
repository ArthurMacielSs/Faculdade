#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
int d1, d2;
int mat[6][6];
int res[11];

// Initialize the matrix
for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 6; j++) {
        mat[i][j] = 0;
    }
}

// Initialize the result array
for (int i = 0; i < 11; i++) {
    res[i] = 0;
}


srand((unsigned)time(NULL));

for (int i = 0; i < 36000; i++) {
d1 = rand() % 6;
d2 = rand() % 6;
mat[d1][d2]++;
res[d1 + d2]++;
}

printf("Matriz:\n");
for (int i = 0; i < 6; i++) {
	for (int j = 0; j < 6; j++) {
		printf("%5d ", mat[i][j]);
	}
	printf("\n");
}

printf("Resultados:\n");
for (int i = 0; i < 11; i++) {
	printf("%5d", res[i]);
}
printf("\n");

for (int i = 0; i < 11; i++) {
	printf("%5d", i + 2);
}
printf("\n");

int val = 0;
int rmf = -1;
for (int i = 0; i < 11; i++) {
	if (res[i] >= val) {
		val = res[i];
		rmf = i + 2;
	}
}
printf("Soma mais frequente: %d\n", rmf);
return 0;
}
