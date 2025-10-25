//Write a Program to create a pyramid pattern using C.
#include <stdio.h>

void main(){
    int N ;
    printf("Enter the Number Of Lines\n");
    scanf("%d",&N);
    for(int i = 1;i<=N;i++){
        for(int j = 1;j<=N-i;j++){
            printf(" ");
        }
        for(int j = 1;j<2*i;j++){
            printf("*");
        }
        printf("\n");
    }
}