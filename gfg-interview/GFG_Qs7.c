//Write a Program to check if the year is a leap year or not.
#include <stdio.h>

void main()
{
    int n ;
    printf("Enter The Year \n");
    scanf("%d",&n);
    if(n%4==0)
        printf("%d is a leap year\n",n);
    else
        printf("%d is not a leap year\n",n);
    
}