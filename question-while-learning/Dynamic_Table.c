//Create an array of multiplication table of 7 upto 10(7 x 10 = 70).use realloc to make it store 15 number(from 7x 1 to 7 x 15).
#include<stdio.h>
#include<stdlib.h>

void main()
{
    int* ptr;
    ptr = (int*)malloc(10*sizeof(int));
    for(int i = 0;i<10;i++){
         ptr[i] = 7 * (i+1);
    }
    ptr = realloc (ptr,15*sizeof(int));
    for(int i = 10;i<15;i++){
         ptr[i] = 7 * (i+1);
    }
    for(int j = 0;j<15;j++){
        printf("%d\n",ptr[j]);
    }
    free(ptr);
}