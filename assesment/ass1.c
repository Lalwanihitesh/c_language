#include <stdio.h>

#define ROW1 2 // Rows of first matrix
#define COL1 2 // Columns of first matrix
#define ROW2 2 // Rows of second matrix
#define COL2 2 // Columns of second matrix

void inputMatrix(int matrix[ROW1][COL1], int rows, int cols, int matrixNum) {
    int i, j;
    printf("\n-------------Matrix: %d-------------\n", matrixNum);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int matrix[ROW1][COL2], int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[ROW1][COL1];
    int matrix2[ROW2][COL2];
    int result[ROW1][COL2];
    int i, j, k;

    printf("Matrix Multiplication\n");

    // Input matrices
    inputMatrix(matrix1, ROW1, COL1, 1);
    inputMatrix(matrix2, ROW2, COL2, 2);

    // Display matrices
    printf("\nMatrix 1:\n");
    displayMatrix(matrix1, ROW1, COL1);

    printf("\nMatrix 2:\n");
    displayMatrix(matrix2, ROW2, COL2);

    // Validate multiplication possibility
    if (COL1 != ROW2) {
        printf("\nMatrix multiplication not possible.\n");
        return 0;
    }

    // Initialize result matrix
    for (i = 0; i < ROW1; i++) {
        for (j = 0; j < COL2; j++) {
            result[i][j] = 0;
        }
    }

    // Matrix multiplication logic
    for (i = 0; i < ROW1; i++) {
        for (j = 0; j < COL2; j++) {
            for (k = 0; k < COL1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display result matrix
    printf("\nResultant Matrix after Multiplication:\n");
    displayMatrix(result, ROW1, COL2);

    return 0;
}

