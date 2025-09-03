#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a;
    scanf("%d", &a);

    const char *numbers[] = {
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"
    };

    if(a>=0 && a <= 9){
        printf("%s\n",numbers[a]);
    } 
    else {
        printf("Greater than 9");
    }

    return 0;
}


