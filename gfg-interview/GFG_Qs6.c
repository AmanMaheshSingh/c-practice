//Write a Program to convert the binary number into a decimal number.
#include <stdio.h>

int main()
{
    int n = 10111,dec=0,a=1;
    while(n!=0){
        dec += (n%10) *a;
        a = a*2;
    }
    printf("%d",dec);
    return 0;
}