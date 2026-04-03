#include<stdio.h>
void main()
{
    int n,rev,d,i,num;
    num=rev=d=0;

    printf("Enter a number: ");
    scanf("%d",&n);

    num=n;

    while(n>0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    if(num==rev)
        printf("\nThe number is a palindrome number.");
    else
        printf("\nThe number is not a palindrome number.");
}