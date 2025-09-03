#include<stdio.h>

int main()
{
    int ary[] = {1,2,3,4,5,6,7,8,9,10};
    int* ptr = ary;
    
    for (int i = 0 ; i < 10;i++){
    printf("the value of pointer at %d is %d \n", i,*ptr);
    ptr++;
    }
    ptr=ary;
    printf("the value of pointer + 2 is %d",*(ptr+2));
    return 0;
}