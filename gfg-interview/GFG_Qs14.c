// Write a  C program to find the GCD(Greatest Common Divisor) of two numbers.
#include<stdio.h>

int GCD(int,int);

int GCD(int a,int b){
    while(b!=0){
    int temp = b;
    b = a%b;
    a= temp;
    }
    return a;
}

void main(){
    int a,b;
    printf("Enter The Numbers a & b\n");
    scanf("%d %d",&a,&b);
    printf("The GCD of %d and %d is %d",a,b,GCD(a,b));
}