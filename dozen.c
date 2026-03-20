#include<stdio.h>
void main()
{
    int dozen,apple;
    dozen=apple=0;

    printf("Enter the price of dozen apples: ");
    scanf("%d",&dozen);

    apple=dozen/12;

    printf("\nThe price of each apple is: %d",apple);
}