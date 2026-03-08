//total expense of a person
#include<stdio.h>
void main()
{
    float cab,flight,amt;
    printf("Enter the cab expense: ");
    scanf("%f",&cab);

    printf("Enter the flight expense: ");
    scanf("%f",&flight);

    amt=cab+flight;
    printf("The total amount spent is: %f",amt);
}