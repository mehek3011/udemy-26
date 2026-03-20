#include<stdio.h>
void main()
{
    int year;
    printf("Enter a year:");
    scanf("%d",&year);

    if(year/4==0)
    {
        printf("\nIt is a leap year.");
    }
    else
    {
        printf("\nIt is not a leap year.");
    }
}