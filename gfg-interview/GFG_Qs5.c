//Write a Program to Replace all 0’s with 1’s in a Number.
#include <stdio.h>

void main()
{
    int num = 102301,result = 0, place = 1;

    while (num > 0) {
        int digit = num % 10;   
        if (digit == 0) {
            digit = 1;          
        }
        result = result + digit * place;
        place = place * 10;
        num = num / 10;
    }

    printf("Converted number: %d\n", result);
}