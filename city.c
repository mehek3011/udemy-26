#include<stdio.h>
void main()
{
    char name[25],city[50];

    printf("Enter your name: ");
    scanf("%s",&name);

    printf("\nEnter your city: ");
    scanf("%s",&city);

    printf("Hey %s,do you really live in %s.",name,city);
}