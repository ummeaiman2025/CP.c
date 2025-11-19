#include <stdio.h>

int main() {
    float principal, rate, time, interest;

    // Input principal, rate, and time
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    // Calculate simple interest
    interest = (principal * rate * time) / 100;

    // Display result
    printf("\nSimple Interest = %.2f\n", interest);

    return 0;
}