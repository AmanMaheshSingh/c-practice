//Write a C program to calculate Compound Interest.
#include <stdio.h>

void main()
{
    int a,p;
    printf("Enter Total Amount(principal ammount + intrest) and Enter Principal Ammount\n");
    scanf("%d %d",&a,&p);
    printf("The Simple Intrest Is %d\n",(a-p));
}