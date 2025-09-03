//Write a Program to check whether a number is prime or not.
#include <stdio.h>

void main()
{
    int n,prime=0;
    printf("Enter The Number to Check\n");
    scanf("%d",&n);
    for(int i=2; i<n;i++){
        if(n%i == 0)
            prime++;
    }
    if(prime!=0)
        printf("The given number %d is not prime\n",n);
    else if(prime==0)
        printf("The given number %d is prime\n",n);
    else
        printf("Error! Enter Only Integer\n");
}