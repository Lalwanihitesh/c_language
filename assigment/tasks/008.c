#include <stdio.h>

int main() {
    int num, digit, sum = 0;
  // Input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    int temp = num;  

     
    while (temp != 0) {
        digit = temp % 10;       
        sum += digit;            
        temp /= 10;              
    }

    printf("Sum of digits of %d is: %d\n", num, sum);

    return 0;
}

