#include <stdio.h>
 
int fibonacci_recursive(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

 
int fibonacci_iterative(int n) {
    int a = 0, b = 1, temp, i;
    if (n == 0) return 0;
    if (n == 1) return 1;

    for (i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

int main() {
    int n;
    printf("Enter the position N to get the Nth Fibonacci number: ");
    scanf("%d", &n);

    printf("\nUsing Recursive method:\n");
    printf("Fibonacci number at position %d is: %d\n", n, fibonacci_recursive(n));

    printf("\nUsing Iterative method:\n");
    printf("Fibonacci number at position %d is: %d\n", n, fibonacci_iterative(n));

    return 0;
}

