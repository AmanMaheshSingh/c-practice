#include<stdio.h>

int main()
{
    int product = 1;
    int n;
    int i = 1;
    printf("tell the number\n");
    scanf("%d",&n);
    while (i<=n){
    product *= i;
    i++;
    }
    printf("the factorial of the given number %d is \n%d",n,product);
}