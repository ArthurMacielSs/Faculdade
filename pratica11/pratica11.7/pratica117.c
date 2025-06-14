/*#include <stdio.h>

int invert_number(int n) {
    int inverted = 0;

    while (n > 0) {
        int digit = n % 10;           // Get last digit
        inverted = inverted * 10 + digit; // Append digit
        n = n / 10;                   // Remove last digit
    }

    return inverted;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int result = invert_number(number);
    printf("Inverted number: %d\n", result);

    return 0;
}*/

#include <stdio.h>
#include <math.h>

int inverteNumero(int x) {
    if (x < 10){
        return x;

    int num_digitos = (int)log10(x);
    }
    else{
        int numero = (x % 10) * pow(10, num_digitos) + inverteNumero(x / 10);
      return numero;
   } 
 }

