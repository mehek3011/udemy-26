#include<stdio.h>
void main()
{
    int a,b,result,choice;

    printf("---------Program's Menu--------");
    printf("\n1. Addition of two numbers.");
    printf("\n2. Square of a numbers.");
    printf("\n3. Cube of a numbers.");
    printf("\n4. even or odd.");

    printf("\nEnter your choice:");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("\nEnter 2 numbers: ");
            scanf("%d%d",&a,&b);
            result=a+b;
            printf("\nSum=%d",result);
            break;
        case 2:
            printf("\nEnter a number:");
            scanf("%d",&a);
            result=a*a;
            printf("\nSquare of the number is %d",result);
            break;
        case 3:
            printf("\nEnter a number:");
            scanf("%d",&a);
            result=a*a*a;
            printf("\nCube of the number is %d",result);
            break;
        case 4:
            printf("\nEnter a number:");
            scanf("%d",&a);
            if(a%2==0)
            {
                printf("\nIt is an even number.");
            }
            else
            {
                printf("\nIt is an odd number.");   
            }
            break;
        default: printf("\nInvalid input");
    }
}