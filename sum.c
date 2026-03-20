#include<stdio.h>
void main()
{
    int a,b,sum,dif;
    sum=dif=0;

    printf("Enter the two numbers:");
    scanf("%d%d",&a,&b);

    sum=a+b;
    if(a>b)
    {
        dif=a-b;
    }
    else
    {
        dif=b-a;
    }
    printf("\nThe sum of two numbers is :%d",sum);
    printf("\nThe absolute difference of two numbers is :%d",dif);
}