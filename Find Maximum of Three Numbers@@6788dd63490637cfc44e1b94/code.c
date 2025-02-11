#include <stdio.h>

int main() {
    int num1, num2, num3, max;

    // Taking input
    scanf("%d %d %d", &num1, &num2, &num3);

    // Finding the maximum number
    max = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);

    // Corrected print statement
    printf("Numbers: %d, %d, %d\n", num1, num2, num3);
    printf("Maximum: %d\n", max);

    return 0;
}


