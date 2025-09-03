#include <stdio.h>

int fibonacchi (int);

int sum (int n) {
if (n==1){
    return 1;
}
   return sum(n-1) + n ;
}

int main()
{
int e;
printf("till where do you want the sum of natural number\n");
scanf("%d",&e);

sum (e);
printf("the sum of natural number till %d is %d",e,sum(e));
return 0;
}
