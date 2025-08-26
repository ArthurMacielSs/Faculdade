#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomInt(int n) {
	return rand() % n;
}
int existe(int *vec, int size, int num) {
for (int i = 0; i < size; i++) {
	if (vec[i] == num)
		return 1;
}
return 0;
}
int contamenores(int *vec, int size, int num) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (vec[i] < num)
			count++;
	}
	return count;
}
int main() {
int n = 10;
srand((unsigned)time(NULL));
int vec[n], pos[n], vec_ordenado[n];

int i = 0;
do {
	int rand_v = randomInt(200);
	if (!existe(vec, n, rand_v)) {
		vec[i] = rand_v;
		i++;
	}
} while (i < n);

printf("vetor origninal: \n");
for (int i = 0; i < n; i++) {
	printf("%d ",vec[i]);
}
printf("\n");

printf(" vetor posições \n");
for (int i = 0; i < n; i++) {
	pos[i] = contamenores(vec, n, vec[i]);
    printf("%d ", pos[i]);
}

for (int i = 0; i < n; i++) {
	vec_ordenado[pos[i]] = vec[i];
}

printf("\n Vetor ordenado:\n");
for (int i = 0; i < n; i++) {
	printf("%d ", vec_ordenado[i]);
}
printf("\n");
}
