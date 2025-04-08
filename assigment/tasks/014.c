 #include <stdio.h>
#include <time.h>

// Recursive factorial function
unsigned long long factorial_recursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial_recursive(n - 1);
}

// Iterative factorial function
unsigned long long factorial_iterative(int n) {
    int i;
    unsigned long long result = 1;
    for (i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    unsigned long long fact_rec, fact_itr;
    clock_t start, end;
    double time_rec, time_itr;

    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    
    start = clock();
    fact_rec = factorial_recursive(n);
    end = clock();
    time_rec = (double)(end - start) / CLOCKS_PER_SEC;

   
    start = clock();
    fact_itr = factorial_iterative(n);
    end = clock();
    time_itr = (double)(end - start) / CLOCKS_PER_SEC;

    printf("\nFactorial of %d (Recursive): %llu\n", n, fact_rec);
    printf("Time taken (Recursive): %.6f seconds\n", time_rec);

    printf("\nFactorial of %d (Iterative): %llu\n", n, fact_itr);
    printf("Time taken (Iterative): %.6f seconds\n", time_itr);

    return 0;
}

