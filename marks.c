#include<stdio.h>
void main()
{
    int s1,s2,s3,total;
    float avg;

    printf("Enter the marks in all the three subjects: ");
    scanf("%d%d%d",&s1,&s2,&s3);

    total=s1+s2+s3;
    avg=total/3.0;

    printf("\nTotal : %d",total);
    printf("\Average : %d",avg);
    
    if(avg>=90)
    {
        printf("\nGrade:A+");
    }
    else if(avg>=80 && avg<90)
    {
       printf("\nGrade:A"); 
    }
    else if(avg>=70 && avg<80)
    {
       printf("\nGrade:B");  
    }
    else if(avg>=60 && avg<70)
    {
       printf("\nGrade:C"); 
    }
    else if(avg>=60 && avg<70)
    {
       printf("\nGrade:C");   
    }
    else
    {
        printf("\nGrade:F");
    }
}