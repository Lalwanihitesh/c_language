#include <stdio.h>

 
int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

 
void reverseString(char str[]) {
    int start = 0;
    int end = stringLength(str) - 1;
    char temp;

    while (start < end) {
        
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main() {
    char input[100];

    printf("Enter a string: ");
    scanf("%s", input);   

    reverseString(input);

    printf("Reversed string: %s\n", input);

    return 0;
}

