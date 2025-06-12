#include <stdio.h>

 void foo(int n) {
if (n < 0)
	return;

foo(n - 1);
printf("%d\n", n);
}

int fatorial(int n){
    if(n<0){
        return 0;
    }
    else if((n==0)||(n==1)){
        return 1;
    }
    else{
        return n * fatorial(n-1);
    }
}

int fibonacci (int n){
    if(n==1 || n==2){
        return 1;
    }
    else{
        return fibonacci(n-1) + fibonacci( n-2);
    }
}

int fibofor(int n){
    int finalFib=0, fib1= 1, fib2 =1;
    if(n<=0){
        return 0;
    }
    else if(n==1 || n==2){
        return 1;
    }
    else{
        for(int i=2;i<n;i++){
            finalFib= fib1 + fib2;
            fib1=fib2;
            fib2=finalFib;
        }
        return finalFib;
    }
}
int triangulo(int row, int col) {
if (col == 0 || col == row) {
	return 1;
} else if (col == 1 || (col + 1) == row) {
	return row;
} else {
	return triangulo(row - 1, col - 1) + triangulo(row - 1, col);
}
}

int main() {
int fator, fibo, fibof;
int n = 5; // linhas do triângulo de Pascal

fator=fatorial(3);
fibo=fibonacci(3);
fibof =fibofor(3);

for (int i = 0; i < n; i++) {
for (int j = 0; j <= i; j++) {
	printf("%d ", triangulo(i, j));
}
printf("\n");
}

//printf("%d\n", fibo);
//printf("%d\n", fibof);
return 0;
}

