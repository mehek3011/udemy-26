#include<stdio.h>
void main()
{
    int num,sp,ep,i;
    num=sp=ep=0;

    printf("Enter the number for which the table is to be printed:");
    scanf("%d",&num);

    printf("Enter the start point of table:");
    scanf("%d",&sp);

    printf("Enter the end point:");
    scanf("%d",&ep);

    if(sp<ep)
    {
        for(i=sp;i<=ep;i++)
        {
            printf("\n%d",i*num);
        }
    }
}