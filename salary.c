#include<stdio.h>
void main()
{
    int basic,allow,ded,gs,net,bonus;
    basic=allow=ded=gs=net=bonus=0;
    printf("Enter basic salary: ");
    scanf("%d",&basic);
    printf("\nEnter allowances: ");
    scanf("%d",&allow);
    printf("\nEnter deductions: ");
    scanf("%d",&ded);
    gs=basic+allow;
    net=gs-ded;
    bonus=net*3;
    printf("\nGross salary: %d",gs);
    printf("\nNet salary: %d",net);
    printf("\nBonus: %d",bonus);
}