#include <stdio.h>

void printN(int);

void printN(int n){
    if(n>0){
        printN(n-1);
    }
    else
    printf("%d ",n);                                                                                                                   

}

void main()
{
    int a;
    printf("Entre the amount of Natural Number You Want Yo See\n");
    scanf("%d",&a);
    printN(a);

}