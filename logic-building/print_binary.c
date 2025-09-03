#include <stdio.h>

void printBinary(int);

void printBinary(int n)
{
    if(n>1)
    printBinary(n/2);

    printf("%d",n%2);
}

void main()
{
    int a;
    printf("Entre The Number:\n");
    scanf("%d",&a);
    if(a==0)
    printf("0");

    else
    printBinary(a);
}