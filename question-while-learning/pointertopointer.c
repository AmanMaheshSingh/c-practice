#include<stdio.h>

int main()
{
    int a = 3;
    int* b =&a;
    int** c = &b;
    
    printf("the value of %d\n",*b);
    printf("the value is %d",**c);
    return 0;
}