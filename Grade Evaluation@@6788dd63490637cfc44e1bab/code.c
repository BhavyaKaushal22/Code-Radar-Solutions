#include <stdio.h>

int main() {
    char grade;
    scanf(" %c", &grade); // Notice the space before %c to handle newline issues

    switch(grade) {
        case 'A': 
            printf("Excellent\n");
            break;
        case 'B': 
            printf("Good\n");
            break;
        case 'C': 
            printf("Average\n");
            break;
        case 'D': 
            printf("Below Average\n");
            break;
        case 'F': 
            printf("Fail\n");
            break;
        default: 
            printf("Invalid grade\n"); // Handling invalid inputs
    }

    return 0;
}