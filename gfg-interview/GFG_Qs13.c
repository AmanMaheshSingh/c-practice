//Write a C Program to check if two numbers are equal without using the comparison operator. 
#include <stdio.h>

void main(){
    int N,M;
    printf("Enter The Numbers To Be Checked\n");
    scanf(" %d %d",&N,&M);
    if(!(N^M)){
        printf("%d is Equal To %d\n",N,M);
    }
    else{
        printf("%d is Not Equal To %d\n",N,M);
    }
}