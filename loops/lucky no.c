#include<stdio.h>
void main()
{
    int dob,r,sum;
    dob=r=sum=0;

    printf("Enter your date of birth: ");
    scanf("%d",&dob);

    while (dob>0)
    {
        r=dob%10;
        sum=sum+r;
        dob=dob/10;

        if(dob==0 && sum>9)
        {
            dob=sum;
            sum=0;
        }
    }
    printf("\nYour lucky number is: %d",sum);
    
}