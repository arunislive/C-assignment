// Write a program that declares variables of different data types) int, float, char etc.)
// and prints their sizes using the size of operator.

#include <stdio.h>

int main()
{
    int i;
    float f;
    double d;
    char c;
    long l;
    short s;
    long double x;

    // Print sizes of different data types
    printf("Size of int: %lu bytes\n", sizeof(i));
    printf("Size of float: %lu bytes\n", sizeof(f));
    printf("Size of double: %lu bytes\n", sizeof(d));
    printf("Size of char: %lu byte\n", sizeof(c));
    printf("Size of long: %lu bytes\n", sizeof(l));
    printf("Size of short: %lu bytes\n", sizeof(s));
    printf("Size of long double: %lu bytes\n", sizeof(x));

    return 0;
}
