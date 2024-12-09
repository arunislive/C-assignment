#include <stdio.h>

int main()
{
    int a, b;

    // Input values
    printf("Enter two numbers:");
    scanf("%d%d", &a, &b);
    // without using third variable
    printf("without using third variable\n");
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After Swapping:\n a=%d\n b=%d\n", a, b);

    printf("now using the third variable----------------------------------------------------------------");

    int temp;
    // Swapping using a third variable
    temp = a;
    a = b;
    b = temp;

    // Output the swapped values
    printf("After swapping:\na = %d\nb = %d\n", a, b);

    return 0;
}
