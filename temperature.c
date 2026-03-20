#include<stdio.h>
void main()
{
    float f,c;

    printf("Enter the temperature in fahrenheit: ");
    scanf("%f",&f);

    c=(f-32)*5/9.0;

    printf("\nThe temperature in celsius is: %f",c);
}