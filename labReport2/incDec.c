// Write a program that defines a variable and then
// increments and decrements the value of the variable using the ++ (increment) and –- (decrement) operators.
// Print the value of the variable after each operation to the console.

#include <stdio.h>
int main()
{
    int a;
    printf("Give an initial value");
    scanf("%d", &a);
    printf("Pre-Increment is %d", ++a);
    printf("Pre-Decrement is %d", --a);
    printf("Post-Increment is %d", a++);
    printf("Post-Decrement is %d", a--);
    return 0;
}
