#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int target, guess, attempts = 0, maxAttempts = 7;

  
    srand(time(0));
    target = rand() % 100 + 1;   

    printf("=== Number Guessing Game ===\n");
    printf("Guess the number between 1 and 100.\n");
    printf("You have %d attempts.\n\n", maxAttempts);

    while (attempts < maxAttempts) {
        printf("Attempt %d: Enter your guess: ", attempts + 1);
        scanf("%d", &guess);
        attempts++;

        if (guess == target) {
            printf("?? Congratulations! You guessed the number in %d attempts!\n", attempts);
            break;
        } else if (guess < target) {
            printf("?? Too low! Try a higher number.\n");
        } else {
            printf("?? Too high! Try a lower number.\n");
        }

        if (attempts == maxAttempts) {
            printf("\n? You've used all your attempts. The correct number was: %d\n", target);
        }
    }

    return 0;
}

