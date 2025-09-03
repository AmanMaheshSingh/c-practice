//Create an array dynamically capable of storing 5 inteagers . Now use realloc so that it can now store 10 integers.
#include<stdio.h>
#include<stdlib.h>

void main()
{
    int* ptr;
    ptr = (int*)malloc(6*sizeof(int));
    ptr[0]=3;
    ptr[1]=8;
    ptr[2]=7;
    ptr[3]=6;
    ptr[4]=5;
    ptr[5]=4;
    for(int i = 0;i<6;i++){
        printf("%d\n",ptr[i]);
    }
    ptr = realloc (ptr,10*sizeof(int));
    ptr[6]=40;
    printf("\n%d\n",ptr[6]);
    free(ptr);
}