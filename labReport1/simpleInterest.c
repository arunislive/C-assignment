// Write a program to calculate simple interest for given P=4000, T=2 , R=5.5.
#include <stdio.h>
int main()
{
    float principle, time, rate, simpleInterest;
    principle = 4000;
    rate = 5.5;
    time = 2;
    simpleInterest = ((principle * rate * time) / 100);
    printf("Simple Interest is %f\n", simpleInterest);
    return 0;
}