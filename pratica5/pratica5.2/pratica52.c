#include <stdio.h>
int fibonacci(int n) {
    int n1, n2, i, result;
    n1=1;
    n2=1;
    if( n<=0 || n>30){
        return -1;
    }
    else if(n ==1 || n==2) {
        return 1;
    }
    else {   
    for(i=0; i<=(n-3); i++)
    {
        result = n1 + n2;
        n2 = n1;
        n1 = result;
       
    }
    return result;
}
}


int main() {
    int number;
  
    // Prompt the user to enter a number.
    printf("Enter a number between 1 and 30: ");
  
    // Read the integer input from the user.
    if (scanf("%d", &number) != 1) {
      printf("Invalid input. Please enter an integer.\n");
      return 1; // Return an error code for invalid input.
    }
    //fflush(stdin);
  
    // Call the fibonacci function with the user's input.
    int result = fibonacci(number);
  
    // Check if the result is -1 (indicating an error).
    if (result == -1) {
      printf("Invalid input. The number must be between 1 and 30.\n");
    } else {
      // Print the result.
      printf("The %dth Fibonacci number is: %d\n", number, result);
    }
  
    return 0; // Return 0 to indicate successful execution.
  }
