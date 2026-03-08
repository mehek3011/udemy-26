//to calculate total rent 
#include<stdio.h>
void main()
{
    int home,firm,total;
    printf("Enter the rent of the house: ");
    scanf("%d",&home);

    printf("Enter the rent of the accounting firm: ");
    scanf("%d",&firm);

    total=home+firm;
    printf("The total rent of the house and the accounting firm: %d",total);
}