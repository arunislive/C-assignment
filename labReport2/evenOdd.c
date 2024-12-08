//! Write a program to check odd or even number using
//?(a) modulus operator
//?(b) using bitwise operator
//?(c) without using bitwise and modulus operator
//?(d) using conditional operator.
#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // (a) Using Modulus Operator
    (num % 2 == 0)
        ? printf("(a) Using modulus: %d is even.\n", num)
        : printf("(a) Using modulus: %d is odd.\n", num);

    // (b) Using Bitwise Operator
    (num & 1)
        ? printf("(b) Using bitwise: %d is odd.\n", num)
        : printf("(b) Using bitwise: %d is even.\n", num);

    // (c) Without Using Modulus or Bitwise Operator
    ((num / 2) * 2 == num)
        ? printf("(c) Without modulus or bitwise: %d is even.\n", num)
        : printf("(c) Without modulus or bitwise: %d is odd.\n", num);

    // (d) Using Conditional Operator
    (num % 2 == 0)
        ? printf("(d) Using conditional operator: %d is even.\n", num)
        : printf("(d) Using conditional operator: %d is odd.\n", num);

    return 0;
}
