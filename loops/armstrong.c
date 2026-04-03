#include<stdio.h>
void main()
{
    int no,sum,r,i,temp;
    no=sum=r=0;

    printf("Enter a number:");
    scanf("%d",&no);

    for(i=0;i<=1000;i++)
    {
        while(no>=0)
        {
            r=no%10;
            sum=sum+(r*r*r);
            no=no/10;
        }
        no==temp;
        if(sum==no)
        {
            printf("\n%d",no);
        }
    }
}