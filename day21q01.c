#include <stdio.h>
#include <math.h>
int main() {
    int n, first, last, digits, middle, swapped;
    printf("Enter number: ");
    scanf("%d", &n);

    last = n % 10;
    digits = (int)log10(n); // no of digits - 1
    first = n / (int)pow(10, digits);
    middle = n % (int)pow(10, digits); // remove first digit
    middle = middle / 10; // remove last digit

    swapped = last * (int)pow(10, digits) + middle * 10 + first;
    
    // Special case for single digit
    if(n < 10) swapped = n;

    printf("Swapped number: %d", swapped);
    return 0;
}