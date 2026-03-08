#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("\nEnter another number: ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a: %d",a);
    printf("\nb: %d",b);
}