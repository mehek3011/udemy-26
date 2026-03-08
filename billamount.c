//generate bill amount of two products
#include<stdio.h>
void main()
{
    float a,b,bill;
    printf("Enter the price of both the products: ");
    scanf("%f %f",&a,&b);
    bill=a+b;
    printf("Bill amount:%f",bill);
}