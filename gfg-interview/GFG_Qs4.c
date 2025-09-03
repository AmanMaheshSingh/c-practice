//Write a Program in C to Swap the values of two variables without using any extra variable.
#include <stdio.h>

void main()
{
    int a = 15,b = 20;
    printf("Values Before Swap: a=%d b=%d\n",a,b);
    a=a+b,b=-(b-a),a=a-b;
    printf("Values After Swap: a=%d b=%d\n",a,b);
}