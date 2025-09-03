#include<stdio.h>

int main()
{
    int n ;
    printf("entre the number : ");
    scanf("%d",&n);
    int table[10];
    
    for (int i = 1 ; i < 11;i++){
    table[i]= n* i ;
    printf("%d x %d = %d\n",n, i,table[i]);
    }
    return 0;
}