//Write a C program to find the LCM(Least Common Multiple) of two numbers.
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
    int a,b,s;
    printf("Enter The Numbers a & b\n");
    scanf("%d %d",&a,&b);
    s=GCD(a,b);
    int LCM = (a*b)/s;
    printf("The LCM of %d and %d is %d\n",a,b,LCM);
}