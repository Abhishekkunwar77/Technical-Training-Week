#include <stdio.h>

int main() {
    int num, digit, product = 1, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num; // Store the original number

    while (temp != 0) {
        digit = temp % 10;    // Extract the last digit
        product *= digit;     // Multiply the digit to the product
        sum += digit;         // Add the digit to the sum
        temp /= 10;           // Remove the last digit
    }

    int difference = product - sum;

    printf("Difference between product and sum of digits of %d is: %d\n", num, difference);

    return 0;
}   