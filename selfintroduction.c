#include<stdio.h>
void main()
{
    char self[500];
    printf("Hey myself computer...may i know more about you:");
    scanf("%[^\n]",&self);  //the [^\n] records strings with spaces

    printf("%s",self);
}

//%s can only read a single word while %^\n can read the entire sentence or para with spaces.