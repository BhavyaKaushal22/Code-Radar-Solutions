#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    // Check if the number is in the range of 1 to 100
    if (num >= 1 && num <= 100) {
        printf("In Range", num);
    } else {
        printf("Out of Range", num);
    }

    return 0;
}
