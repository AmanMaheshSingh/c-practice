//Write a Program to reverse a number.
#include <stdio.h>

int ReverseNumber(int);

int ReverseNumber(int N){
    int R = 0;
    while(N!=0){
        R = R * 10 + (N%10);
        N = N/10;
    }
    return R;
}

void main(){
    int N = 1235698;
    printf("%d = Initial Number \n",N);
    int S = ReverseNumber(N);
    printf("%d = Reversed Number\n",S);
}