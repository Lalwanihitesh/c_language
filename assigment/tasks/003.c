#include <stdio.h>

int main() {
    int marks;

    // Input from the user
    printf("Enter student marks (0-100): ");
    scanf("%d", &marks);

   
    if (marks < 0 || marks > 100) {
        printf("Invalid marks. Please enter a value between 0 and 100.\n");
    } else {
        
        if (marks > 90) {
            printf("Grade: A\n");
        } else if (marks > 75) {
            printf("Grade: B\n");
        } else if (marks > 50) {
            printf("Grade: C\n");
        } else {
            printf("Grade: D\n");
        }
    }

    return 0;
}

