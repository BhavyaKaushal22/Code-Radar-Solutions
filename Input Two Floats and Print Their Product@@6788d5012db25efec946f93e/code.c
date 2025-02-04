#include <stdio.h>
int main()
{
    float num1,num2;
    printf("Enter two floating-point numbers separated by a space: ");
    scanf("%f %f" , &num1 , &num2);
    float product = num1 * num2;
    printf("Product: %.2f\n" , product);
    return 0;
}

