#include<stdio.h>
void main()
{
    int prev,pres,units;
    float bill,rate;

    printf("Enter the previous month readings: ");
    scanf("%d",&prev);

    printf("\nEnter the present month readings :");
    int c;
    while ((c = getchar()) != '\n' && c != EOF);;
    scanf("%d",&pres);

    units=pres-prev;

    if(units>=500)
    {
        rate=4.80;
        bill=units*rate;
    }
    else
    {
        rate=3.50;
        bill=units*rate;
    }
    printf("Your total bill amount is: %f",bill);   
}