//Write a program to dynamiclly create an array of size 6 capable of storing 6 integers using clloc.
#include<stdio.h>
#include<stdlib.h>

void main()
{
    int* ptr;
    ptr = (int*)calloc(6,sizeof(int));
    ptr[0]=3;
    ptr[1]=8;
    ptr[2]=7;
    ptr[3]=6;
    ptr[4]=5;
    ptr[5]=4;
    for(int i = 0;i<6;i++){
        printf("%d\n",ptr[i]);
    }
    free(ptr);
}