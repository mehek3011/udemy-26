#include<stdio.h>
void main()
{
    int c1,c2,c3;
    float avg=0;

    printf("Enter the price of first chocolate: ");
    scanf("%d",&c1);

    printf("\nEnter the price of the second chocolate: ");
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    scanf("%d",&c2);

    printf("\nEnter price of third chocolate:");
    while ((c = getchar()) != '\n' && c != EOF);
    scanf("%d",&c3);

    avg=(c1+c2+c3)/3;
    printf("\nThe average of the price of the three chocolates is: %f",avg);
}