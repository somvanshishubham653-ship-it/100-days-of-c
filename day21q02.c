#include <stdio.h>
int main() {
    int n, sum = 0, i;
    printf("Enter number: ");
    scanf("%d", &n);

    for(i = 1; i <= n/2; i++) {
        if(n % i == 0) {
            sum += i;
        }
    }
    if(sum == n && n != 0)
        printf("%d is Perfect Number", n);
    else
        printf("%d is NOT Perfect Number", n);
    return 0;
}