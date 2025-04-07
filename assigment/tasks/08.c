#include <stdio.h>

// Function declaration
int factorial(int n);

int main() {
    int num;

    // Input from user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the number is valid
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Function call
        int result = factorial(num);
        printf("Factorial of %d is: %d\n", num, result);
    }

    return 0;
}

// Function definition
int factorial(int n) {
    int fact = 1;
    int i;  // Declare 'i' outside the loop

    for (i = 1; i <= n; i++) {
        fact *= i;
    }

    return fact;
}


