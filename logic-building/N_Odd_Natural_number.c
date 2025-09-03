#include <stdio.h>

void printOdd(int);

void printOdd(int n)
{
    if(n == 0)
    return;

    printOdd(n - 1);
    printf("%d ",n*2-1);
}

void main()
{
    int a ;
    printf("enter the amount of number you want to see as odd numbers\n");
    scanf("%d",&a);

    printOdd(a);
}