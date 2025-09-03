#include <stdio.h>

int sum(int);

int sum (int n )
{
   if(n == 0)
   return;
   
   return n + sum (n-1);
}

void main()
{
    int a ;
    printf("Enter The Value :\n");
    scanf("%d",&a);

    printf("%d\n",sum(a));
}