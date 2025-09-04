//Write a program to Factorial of a Number.
#include <stdio.h>

void main()
{
    int n,fac=1;
    printf("Enter The Number\n");
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        fac*=i;
    }
    printf("%d is factorial of %d",fac,n);
}