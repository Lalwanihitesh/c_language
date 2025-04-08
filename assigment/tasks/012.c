#include <stdio.h>

int main() {
    int N, i;
    float sum = 0, average;

    
    printf("Enter how many numbers you want to input (N): ");
    scanf("%d", &N);
 
    int arr[N];

     
    printf("Enter %d numbers:\n", N);
    for (i = 0; i < N; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];   
    }

     
    average = sum / N;

   
    printf("\nSum of the array elements: %.2f\n", sum);
    printf("Average of the array elements: %.2f\n", average);

    return 0;
}

