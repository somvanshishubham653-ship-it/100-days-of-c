#include <stdio.h>
int main(){
    float a,b;
    printf("Enter your two numbers: \n");
    scanf("%f %f",&a,&b);
    printf("Sum = %.2f\n",a+b);
    printf("Difference = %.2f\n",a-b);
    printf("Product = %.2f\n",a*b);
    if(b!=0) printf("Quotient = %.2f",a/b);
    else printf("Division by zero not possible");
    return 0;
}