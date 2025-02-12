#include <stdio.h>

int main() {
    char signal;
    scanf(" %c", &signal); // The space before %c helps handle newline issues

    switch(signal) {
        case 'R': 
            printf("Stop\n");
            break;
        case 'G': 
            printf("Go\n");
            break;
        case 'Y': 
            printf("Slow Down\n");
            break;
        default: 
            printf("Invalid input\n"); // Handling invalid inputs
    }

    return 0;
}