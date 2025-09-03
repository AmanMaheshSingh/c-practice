#include <stdio.h>

int lastDigit(int);

int lastDigit(int n)
{
    if(n==0)
    return 0;

    return (n%10) + lastDigit(n/10);
}

void main()
{
    int s;
    printf("Entre The Number:\n");
    scanf("%d",&s);
    printf("The Sum OF Digits Of Given Number %d is %d",s,lastDigit(s));
}