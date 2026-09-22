#include <stdio.h>
int main() {
    int n, i;
    float sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        float num = 2 * i;
        float den = 4 * i - 1;
        sum += num / den;
        printf("%.0f/%.0f ", num, den);
        if(i < n) printf("+ ");
    }
    printf("\nSum = %.4f", sum);
    return 0;
}