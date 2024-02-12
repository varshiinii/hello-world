/**
 * @file add.cpp
 */

#include <stdio.h>

int addNumbers(int x, int y);

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    int sum = addNumbers(num1, num2);
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}

int addNumbers(int x, int y) {
    return a + b;
}
