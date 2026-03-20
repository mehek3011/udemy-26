#include<stdio.h>
void main()
{
    int age1,age2;
    char name1[20],name2[20];

    printf("Enter the name and age of the first person: ");
    scanf("%s%d",&name1,&age1);

    printf("\nEnter the name and age of the second person: ");
    scanf("%s%d",&name2,&age2);

    if(age1>age2)
    {
        printf("%s is the elder one",name1);
    }
    else
    {
        printf("%s is the elder one",name1);
    }
}