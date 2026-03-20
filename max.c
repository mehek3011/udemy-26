#include<stdio.h>
void main()
{
    int a,b,c,d;
    a=b=c=d=0;

    printf("Enter 4 numbers: ");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    if(a>b && a>c && a>d)
    {
        printf("\nThe maximum number is %d",a);
    }
    else if(b>a && b>c && b>d)
    {
        printf("\nThe maximum number is %d",b);
    }
    else if(c>a && c>b && c>d)
    {
        printf("\nThe maximum number is %d",c);
    }
    else 
    {
        printf("\nThe maximum number is %d",d);
    }
}