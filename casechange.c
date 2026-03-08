//program to convert a loweracse letter to uppercase.
#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a character in lowercase...: ");
    scanf("%c",&ch);

    printf("\nThe entered character in uppercase is....%c",ch-32);

    printf("\nEnter a character in uppercase...: ");
    fflush(stdin);
    scanf("%c",&ch);

    printf("\nThe entered character in lowercase is..%c",ch+32);
}