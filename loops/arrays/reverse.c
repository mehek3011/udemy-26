#include<stdio.h>
void main()
{
    int n[10],i;

    printf("Enter the elements of the array:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&n[i]);
    }
    printf("\nElements in reverse order:");
    for(i=9;i>=0;i--)
    {
        printf("\n%d",n[i]);
    }
}