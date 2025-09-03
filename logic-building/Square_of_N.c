#include <stdio.h>

int sq(int);

int sq (int n)
{
    if(n>0)
    {
        sq(n-1);
        printf("%d ",n*n);
    }
}

void main()
{
    int a ;
    printf("Enter The Value of N:\n");
    scanf("%d",&a);
    int N = sq(a);
}