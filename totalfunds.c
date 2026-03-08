//to calculate total funds
#include<stdio.h>
void main()
{
    int nb,pb,funds;
    printf("Enter the funds in the nationalised bank: ");
    scanf("%d",&nb);

    printf("Enter the funds in the private bank: ");
    scanf("%d",&pb);

    funds=nb+pb;
    printf("The total funds available are: %d",funds);
}