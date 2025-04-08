#include <stdio.h>
#include <math.h>

int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        count++;
        num /= 10;
    }
    return count;
}

int isArmstrong(int num) {
    int original = num;
    int sum = 0, digit;
    int digits = countDigits(num);

    while (num != 0) {
        digit = num % 10;
        sum += (int)pow(digit, digits);
        num /= 10;
    }

    return (sum == original);
}

int main() {
    int i;

    printf("Armstrong numbers between 1 and 1000:\n");

    for (i = 1; i <= 1000; i++) {
        if (isArmstrong(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}

