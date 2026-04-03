#include<stdio.h>
void main()
{
    int arr[10],i=0,d,no=3;

    while(i<10)
    {
        d=2;
        while(d<no)
        {
            if(no%d==0)
            {
                break;
            }
        d++;
    }
    if(no==d)
    {
        arr[i]=no;
        i++;
    }
    no++;
    }
    for(i=0;i<10;i++)
    {
        printf("\n",arr[i]);
    }
}