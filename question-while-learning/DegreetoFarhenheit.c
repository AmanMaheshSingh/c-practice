#include <stdio.h>

float convert (float);

float convert (float x){
printf("%.2f° in fahrenhite is %.2fF ",x,(x*9/2)+32);
}

int main()
{
    float a = 33;
    
    convert (a);
}