#include <stdio.h>
int main() {
    int n, i;
    float sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        if(i == 1) {
            sum += 1.0;
        } else {
            float num = 2*i - 1;
            float den = 2*i;
            sum += num / den;
        }
    }
    printf("Sum = %.4f", sum);
    return 0;
}