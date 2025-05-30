#include <stdio.h>


int main() {
int N, notes100=0, notes50=0, notes20=0, notes10=0, notes5=0, notes2=0, notes1=0;
scanf("%d", &N);
printf("%d\n", N);

while ( N != 0) {
if(N>=100){
notes100 = N / 100;
N = N - (notes100 * 100);
} else if (N>=50){
notes50 = N / 50;
N = N - (notes50 * 50);
} else if (N >= 20) {
notes20 = N / 20;
N = N - (notes20 * 20);
} else if (N>=10) {
notes10 = N / 10;
N = N - (notes10 * 10);
}else if (N>=5) {
notes5 = N / 5;
N = N - (notes5 * 5);
}else if (N>=2) {
notes2 = N / 2;
N = N - (notes2 * 2);
}else if (N>=1){
notes1= N / 1;
N = N - (notes1 * 1);
}


}
printf("%d nota(s) de R$100,00\n", notes100);
printf("%d nota(s) de R$50,00\n", notes50);
printf("%d nota(s) de R$20,00\n", notes20);
printf("%d nota(s) de R$10,00\n", notes10);
printf("%d nota(s) de R$5,00\n", notes5);
printf("%d nota(s) de R$2,00\n", notes2);
printf("%d nota(s) de R$1,00\n", notes1);
return 0;
}