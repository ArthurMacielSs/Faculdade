#include <stdio.h>

int main(int argc, char *argv[]) {
	int a[10], *b;
	b = &a[0];
	b[5] = 999;
	printf("%d\n", a[5]);
	printf("%d\n", b[5]);

	return 0;
}
