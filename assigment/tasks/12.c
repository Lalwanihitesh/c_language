#include <stdio.h>

#define SIZE 3  

 
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student students[SIZE];  
    int i;

 
    printf("Enter details of %d students:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        printf("\nStudent %d:\n", i + 1);
        
        printf("Enter name: ");
        scanf(" %[^\n]", students[i].name);   

        printf("Enter roll number: ");
        scanf("%d", &students[i].roll);

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }
 
    printf("\n--- Student Details ---\n");
    for (i = 0; i < SIZE; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name       : %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].roll);
        printf("Marks      : %.2f\n", students[i].marks);
    }

    return 0;
}

