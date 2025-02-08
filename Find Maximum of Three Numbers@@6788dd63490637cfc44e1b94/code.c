#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    
    // Print the maximum number
    printf("The maximum number is: %d\n", max);
    
    return 0;
}
