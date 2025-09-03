#include<stdio.h>

int main()
{
    int i = 33;
    int* j = &i;
    
    printf("the address of variable is %u\n",&i);
    printf("the value of variable is %d",*j);
    return 0;
}