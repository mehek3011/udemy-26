#include<stdio.h>
void main()
{
    char q1,q2,q3;

    printf("\n1. C language is developed in the year 1972: (t/f): ");
    scanf("%c",&q1);

    printf("\n2.C language is developed by Ken Thompson : (t/f) : ");
    fflush(stdin);
    scanf("%c",&q2);

    printf("\n3. C language is derived from BCPL and B: (t/f) : ");
    fflush(stdin);
    scanf("%c",&q3);

    printf("\nYour answers are as follows:");
    printf("\nQuestion 1: %c",q1);
    printf("\nQuestion 2: %c",q2);
    printf("\nQuestion 3: %c",q3);
}