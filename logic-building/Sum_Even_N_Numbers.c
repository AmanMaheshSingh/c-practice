#include <stdio.h>

int sumEven (int);

int sumEven(int n)
{
    if (n == 0)
    return 0;

    return (n * 2) + sumEven (n - 1 );
}

void main ()
{
    int a ;
    printf("Entre the Number:\n");
    scanf("%d",&a);

    printf("The sum Is %d\n",sumEven(a));
}