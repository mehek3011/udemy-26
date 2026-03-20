#include<stdio.h>
void main()
{
    int units;
    float dom,com;
    units=0;

    printf("Enter the units consumed: ");
    scanf("%d",&units);

    if(units<=100)
    {
        dom=500;
        com=750;
    }
    else if(units>=101 && units<=200)
    {
        dom=3.50*units;
        com=5.50*units;
    }
    else if(units>=201 && units<=300)
    {
        dom=6.00*units;
        com=7.50*units;
    }
    else 
    {
        dom=8.00*units;
        com=9.50*units;
    }
    printf("\ndomestic: %f",dom);
    printf("\nCommercial: %f",com);
}