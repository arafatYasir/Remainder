#include <stdio.h>

int main() {
    int divisible, divisor, quotient, remainder;

    printf("Divisible Number: ");
    scanf("%d", &divisible);

    printf("Divisor Number: ");
    scanf("%d", &divisor);

    quotient = divisible / divisor;
    remainder = divisible - (quotient * divisor);

    printf("Quotient Number: %d\n", quotient);
    printf("Remainder Number: %d\n", remainder);
    return 0;
}