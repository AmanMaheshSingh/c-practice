#include<stdio.h>

int main()
{
    int table[] = {0,5,10,15,20,25,30,35,40,45,50};
    
    for (int i = 1 ; i < 11;i++){
    printf("5 x %d = %d\n", i,table[i]);
    }
    return 0;
}