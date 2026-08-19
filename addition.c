#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Ask user for input
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate the sum
    sum = num1 + num2;

    // Display the output
    printf("The sum is: %d\n", sum);

    // Signal successful execution
    return 0;
}