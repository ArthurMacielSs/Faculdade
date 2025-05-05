#include "problema56.h"

unsigned long long fatorial (int n){
int i;
unsigned long long fat;
fat =1;
for (i=1; i<=n; i++){
    fat = fat * i;
}
return fat;

}




