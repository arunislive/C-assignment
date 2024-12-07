#include <stdio.h>
#include <math.h> // For the pow() function

int main()
{

    int n = 1; // Compounding frequency (e.g., annually = 1)

    float principle, time, rate, amount, compountInterest;
    principle = 4000;
    rate = 5.5;
    time = 2;

    // Convert rate to decimal since rate is on percentage basis
    rate = rate / 100;

    // Calculate total amount (A) using the compound interest formula
    amount = principle * pow((1 + rate / n), n * time);
    compountInterest = amount - principle;

    // Output
    printf("Total Amount (A): %.2f\n", amount);
    printf("Compound Interest (CI): %.2f\n", compountInterest);

    return 0;
}
