//Write a program to dynamiclly create an array of size 6 capable of storing 6 integers entered by users.
#include<stdio.h>
#include<stdlib.h>

void main()
{
    int* ptr;
    ptr = (int*) malloc(6*sizeof(int));
    printf("Enter The Values:\n");
    for(int i=0;i<6;i++){
        scanf(" %d",&ptr[i]);
    }
    for(int i=0;i<6;i++){
        printf("%d\n",ptr[i]);
    }
}