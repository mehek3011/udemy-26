#include<stdio.h>
int main()
{
    float sales,dis,amt;

    printf("Enter the sales amount:");
    scanf("%f",&sales);

    if(sales>=25000)
    {
        dis=25/100;
    }
    else if(sales>=20000 && sales<25000)
    {
        dis=20/100; 
    }
    else if(sales>=10000 && sales<20000)
    {
        dis=10/100;
    }
    else if(sales>=5000 && sales<10000)
    {
        dis=5/100;
    }
    else
    {
        dis=0;
    }
    amt=sales-dis;
    printf("\nYour total amt is: %f",amt);
    return 0;
}