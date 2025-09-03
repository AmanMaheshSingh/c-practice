#include<stdio.h>

int main()
{
    int product = 1;
    int n;
    printf("tell the number\n");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
    product *= i;
    }
    printf("the factorial of the given number %d is \n%d",n,product);
}