#include<stdio.h>
void main()
{
    int ic;
    float imagesize;
    const max=50;
    ic=imagesize=0;

    printf("Enter the size of the image: ");
    scanf("%f",&imagesize);

    ic=max/imagesize;

    printf("\nThe total image count is: %d",ic);
}