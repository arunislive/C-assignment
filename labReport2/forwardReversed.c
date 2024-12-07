// Write a program to prompt the user to input 3 integer values and print these values in forward and reversed order.

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    printf("\n");
    printf("Your input is: %d\t%d\t%d\n", a, b, c);
    printf("Your input in reversed order is: %d\t%d\t%d\n", c, b, a);
    printf("Program ends here---------------------------------------------------------------- ");
}
