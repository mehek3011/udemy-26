#include<stdio.h>
void main()
{
    int price,total,i;
    price=total=0;

    for(i=1;i<=5;i++)
    {
        printf("Enter the price for the %d product: ",i);
        scanf("%d",&price);

        if(price+total>10000)
        {
            printf("\nYou have reached maximum limit.");
            continue;
        }
        total=total+price;
    }
    printf("\nYour total price is %d",total);
}