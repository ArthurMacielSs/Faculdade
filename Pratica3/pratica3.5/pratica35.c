#include <stdio.h>

int main() {
    long long long_min = -(1L << (sizeof(long) * 8 - 1));
    unsigned long long long_max = (1ULL << (sizeof(unsigned long long) * 8)) - 1;
 
    printf("menor: %lld\n", long_min);
    printf("maior: %llu\n", long_max);

    return 0;
}
