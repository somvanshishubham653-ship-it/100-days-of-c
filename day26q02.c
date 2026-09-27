#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n); // n=5 daalna
    // upper part
    for(int i=1; i<=n; i+=2) {
        for(int j=1; j<=i; j++) {
            printf("*\n");
        }
        printf("\n");
    }
    // lower part
    for(int i=n-2; i>=1; i-=2) {
        for(int j=1; j<=i; j++) {
            printf("*\n");
        }
        if(i != 1) printf("\n");
    }
    return 0;
}