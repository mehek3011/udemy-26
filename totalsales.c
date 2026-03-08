//to calculate total sales 
#include<stdio.h>
void main()
{
    int js,fs,total;
    printf("Enter the January sales: ");
    scanf("%d",&js);
    printf("\nEnter the february sales:");
    scanf("%d",&fs);
    total=js+fs;
    printf("The total sales are: %d",total);
}