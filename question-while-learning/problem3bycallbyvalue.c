#include<stdio.h>

int point(int);

int point(int x){
    x= x*10;
    return x;
}
int main()
{
    int i = 3;
    
    
    printf("the value is %d\n",i);
    point(i);
    printf("the value is  %d",i);
    
    return 0;
}