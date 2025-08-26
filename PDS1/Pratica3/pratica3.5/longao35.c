#include <stdio.h>

int main() {
   
    //short short_min = -(1 << (sizeof(short) * 8 - 1));
    //short short_max = (1 << (sizeof(short) * 8 - 1)) - 1;

    
   // int int_min = -(1 << (sizeof(int) * 8 - 1));
   // int int_max = (1 << (sizeof(int) * 8 - 1)) - 1;


    long long_min = -(1L << (sizeof(long) * 8 - 1));
   // long long_max = (1L << (sizeof(long) * 8 - 1)) - 1;

   // long long llong_min = -(1LL << (sizeof(long long) * 8 - 1));
   // long long llong_max = (1LL << (sizeof(long long) * 8 - 1)) - 1;

    
   // unsigned int unsigned_min = 0;
    unsigned long long unsigned_max = (1U << (sizeof(unsigned long long) * 8)) - 1;
   // printf("short:\nmenor: %hd\nmaior: %hd\n\n", short_min, short_max);
   // printf("int:\nmenor: %d\nmaior: %d\n\n", int_min, int_max);
   // printf("long:\nmenor: %ld\nmaior: %ld\n\n", long_min, long_max);
   // printf("long long:\nmenor: %lld\nmaior: %lld\n\n", llong_min, llong_max);
    //printf("unsigned int:\nmenor: %u\nmaior: %lld\n", unsigned_min, unsigned_max);
    printf("menor: %lld\n", long_min);
    printf("maior: %llu\n", unsigned_max);

    return 0;
}
