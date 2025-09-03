#include <stdio.h>

int sumOdd (int);

int sumOdd(int n)
{
    if (n == 0)
    return 0;

    return (n * 2 - 1) + sumOdd (n - 1 );
}

void main ()
{
    int a ;
    printf("Entre the Number:\n");
    scanf("%d",&a);

    printf("The sum Is %d\n",sumOdd(a));
}