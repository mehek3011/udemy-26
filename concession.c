#include<stdio.h>
void main()
{
    int age;
    char gender;
    age=0;

    printf("Enter the age of the person: ");
    scanf("%d",&age);

    if(age<=5)
    {
        printf("\nNo ticket required.");
    }
    else
    {
        printf("\nEnter the gender : ");
        fflush(stdin);
        scanf("%c",&gender);
        if(gender=='F' || gender=='f')
        {
            if(age>=50)
            printf("\nYou are eligible for 50% concession.");
            else
            printf("\nFull ticket required.");
        }
        else if(gender=='M' || gender=='m')
        {
            if(age>=60)
            printf("\nYou are eligible for 50% concession.");
            else
            printf("\nFull ticket required.");  
        }
        else
        {
            printf("\nNo concession provided.");
        }
    }
}