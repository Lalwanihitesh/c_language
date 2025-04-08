#include <stdio.h>

int main() {
    int a, b, c;
    int largest, smallest;

    
    printf("Enter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);
 
    if (a >= b && a >= c)
        largest = a;
    else if (b >= a && b >= c)
        largest = b;
    else
        largest = c;

  
    if (a <= b && a <= c)
        smallest = a;
    else if (b <= a && b <= c)
        smallest = b;
    else
        smallest = c;

    printf("\nUsing if-else:\n");
    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);

    
    int largest_code;

    if (a >= b && a >= c)
        largest_code = 1;
    else if (b >= a && b >= c)
        largest_code = 2;
    else
        largest_code = 3;

    switch (largest_code) {
        case 1:
            largest = a;
            break;
        case 2:
            largest = b;
            break;
        case 3:
            largest = c;
            break;
    }

    // Same for smallest
    int smallest_code;

    if (a <= b && a <= c)
        smallest_code = 1;
    else if (b <= a && b <= c)
        smallest_code = 2;
    else
        smallest_code = 3;

    switch (smallest_code) {
        case 1:
            smallest = a;
            break;
        case 2:
            smallest = b;
            break;
        case 3:
            smallest = c;
            break;
    }

    printf("\nUsing switch-case:\n");
    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);

    return 0;
}

