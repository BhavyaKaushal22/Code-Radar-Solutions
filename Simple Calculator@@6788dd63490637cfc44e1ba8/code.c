#include <stdio.h>

int main() {
    int num1, num2;
    char op;
    
    // Taking input
    scanf("%d %d %c", &num1, &num2, &op);

    // Performing the operation based on the operator
    switch(op) {
        case '+': 
            printf("%d\n", num1 + num2);
            break;
        case '-': 
            printf("%d\n", num1 - num2);
            break;
        case '*': 
            printf("%d\n", num1 * num2);
            break;
        case '/': 
            if (num2 == 0) {
                printf("error\n"); // Handling division by zero
            } else {
                printf("%d\n", num1 / num2);
            }
            break;
        default: 
            printf("Error\n"); // Handling invalid operators
    }

    return 0;
}