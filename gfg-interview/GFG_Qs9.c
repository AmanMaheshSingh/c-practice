//Write a Program to Check if a number is an Armstrong number or not.
#include<stdio.h>
#include<math.h>

void main(){
    int s=0,n,arm=0;
    printf("Enter The Number\n");
    scanf("%d",&n);
    int temp=n;
    if(temp==0){
        s=1;
    }else{
        while(temp != 0){
            temp = temp / 10;
            s++;
        }
    }
    temp=n;
    while(temp != 0){
        int digit = temp%10;
        arm += pow(digit, s);
        temp/=10;
    }
    if(arm == n){
        printf("%d is a Armstrong Number\n",n);
    }else{
        printf("%d is Not a Armstrong Number\n",n);
    }
}