//Q38: Write a program to find the sum of digits of a number.

#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        sum += n % 10;  // Add last digit to sum
        n = n / 10;     // Remove last digit
    }

    printf("%d\n", sum);

    return 0;
}
