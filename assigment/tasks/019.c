#include <stdio.h>

 
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}
 
int combination(int n, int r) {
    if (r == 0 || r == n)
        return 1;
    return combination(n - 1, r - 1) + combination(n - 1, r);
}

 
int main() {
    int i, j, rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("\nPascal's Triangle using recursion:\n\n");

    for (i = 0; i < rows; i++) {
        for (j = 0; j < rows - i - 1; j++)
            printf("  ");

        for (j = 0; j <= i; j++) {
            printf("%4d", combination(i, j));
        }
        printf("\n");
    }

    return 0;
}

