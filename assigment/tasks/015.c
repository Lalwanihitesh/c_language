#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome
int isPalindromeString(char str[]) {
    int i = 0;
    int j = strlen(str) - 1;

    while (i < j) {
        if (str[i] != str[j])
            return 0;
        i++;
        j--;
    }

    return 1;
}

int main() {
    char text[100];

    printf("Enter a string: ");
    scanf("%s", text);  

    if (isPalindromeString(text))
        printf("\"%s\" is a palindrome string.\n", text);
    else
        printf("\"%s\" is not a palindrome string.\n", text);

    return 0;
}

