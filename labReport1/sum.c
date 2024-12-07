// Write a program to enter two integers and then display their sum

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter 2 numbers:");
    scanf("%d%d", &a, &b);
    printf("sum of %d and %d is %d:", a, b, a + b);
}