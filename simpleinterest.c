#include<stdio.h>
void main()
{
    float p,r,t,si;
    printf("Enter the principle amount: ");
    scanf("%f",&p);
    printf("\nEnter the rate: ");
    scanf("%f",&r);
    printf("\nEnter the time in years: ");
    scanf("%f",&t);
    si=(p*r*t)/100;
    printf("Interest for Rs.%f",p);
    printf("is Rs.%f",si);
}