#include<stdio.h>
void main()
{
    int a[5],b[5],c[5],i,j;

    printf("Enter the elements in first array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the elements in second array:");
    for(i=4;i>=0;i--)
    {
        scanf("%d",&b[i]);
    }

    for(i=0;i<5;i++)
    {
        c[i]=a[i]+b[i];
    }
    for(i=0;i<5;i++)
        printf("\t%d",c[i]);
}