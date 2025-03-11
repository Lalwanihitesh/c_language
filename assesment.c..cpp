#include <stdio.h>

 
void display_menu() {
    printf("**************************************\n");
    printf("Welcome to the Menu-based Program!\n");
    printf("Please select an option below:\n");
    printf("1. Add two numbers\n");
    printf("2. Subtract two numbers\n");
    printf("3. Multiply two numbers\n");
    printf("4. Divide two numbers\n");
    printf("5. Exit\n");
    printf("**************************************\n");
}

 
void add_numbers() {
    double num1, num2, result;
    printf("\nYou selected Add two numbers.\n");
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    result = num1 + num2;
    printf("The result of adding %.2lf and %.2lf is: %.2lf\n", num1, num2, result);
}

 
void subtract_numbers() {
    double num1, num2, result;
    printf("\nYou selected Subtract two numbers.\n");
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    result = num1 - num2;
    printf("The result of subtracting %.2lf from %.2lf is: %.2lf\n", num2, num1, result);
}

 
void multiply_numbers() {
    double num1, num2, result;
    printf("\nYou selected Multiply two numbers.\n");
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    result = num1 * num2;
    printf("The result of multiplying %.2lf and %.2lf is: %.2lf\n", num1, num2, result);
}

 
void divide_numbers() {
    double num1, num2, result;
    printf("\nYou selected Divide two numbers.\n");
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);

     
    if (num2 == 0) {
        printf("Error: Cannot divide by zero!\n");
    } else {
        result = num1 / num2;
        printf("The result of dividing %.2lf by %.2lf is: %.2lf\n", num1, num2, result);
    }
}

 
int main() {
    int choice;

    while (1) {
        display_menu();  

        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);   

    
        switch (choice) {
            case 1:
                add_numbers();   
                break;
            case 2:
                subtract_numbers();   
                break;
            case 3:
                multiply_numbers();   
                break;
            case 4:
                divide_numbers();   
            case 5:
                printf("Exiting the program. Goodbye!\n");   
                return 0;   
            default:
                printf("Invalid choice. Please select a valid option (1-5).\n");   
        }
    }

    return 0;
}

