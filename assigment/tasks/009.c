#include <stdio.h>

int main() {
    int num, digit, sum = 0, reverse = 0;

  
    printf("Enter an integer: ");
    scanf("%d", &num);

    int temp = num;  

    while (temp != 0) {
        digit = temp % 10;          
        sum += digit;               
        reverse = reverse * 10 + digit;   
        temp /= 10;                
    }

    printf("Sum of digits of %d is: %d\n", num, sum);
    printf("Reversed number of %d is: %d\n", num, reverse);

    return 0;
}

