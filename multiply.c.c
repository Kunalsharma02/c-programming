#include <stdio.h>
int main() 
{
    double a, b, product;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);  
    product = a * b;
    printf("Product = %.2lf", product);  // %.2lf displays number up to 2 decimal point
    return 0;
}