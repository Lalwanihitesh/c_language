#include <stdio.h>

int main() {
    FILE *fp;
    char str[100] = "Hello! This is a file handling example in C.";
    char buffer[100];

    
    fp = fopen("example.txt", "w"); 
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    fprintf(fp, "%s", str);   
    fclose(fp);   

     
    fp = fopen("example.txt", "r");   
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    
    printf("File content:\n");
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    fclose(fp);   

    return 0;
}

