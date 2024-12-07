//! Write a program to check odd or even number using
//?(a) modulus operator
//?(b) using bitwise operator
//?(c) without using bitwise and modulus operator
//?(d) using conditional operator.

#include <stdio.h>

int main()
{
    int num;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // (a) Using Modulus Operator
    if (num % 2 == 0)
    {
        printf("(a) %d is even (using modulus).\n", num);
    }
    else
    {
        printf("(a) %d is odd (using modulus).\n", num);
    }

    // (b) Using Bitwise Operator
    if ((num & 1) == 0)
    {
        printf("(b) %d is even (using bitwise).\n", num);
    }
    else
    {
        printf("(b) %d is odd (using bitwise).\n", num);
    }

    // (c) Without Using Bitwise or Modulus Operator
    if ((num / 2) * 2 == num)
    {
        printf("(c) %d is even (without modulus or bitwise).\n", num);
    }
    else
    {
        printf("(c) %d is odd (without modulus or bitwise).\n", num);
    }

    // (d) Using Conditional Operator
    (num % 2 == 0)
        ? printf("(d) %d is even (using conditional).\n", num)
        : printf("(d) %d is odd (using conditional).\n", num);

    return 0;
}
