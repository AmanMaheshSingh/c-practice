#include <stdio.h>

float force (float);

float force (float x){
printf("The value of force is %.2f",x*9.8);
}

int main()
{
    float m = 33;
    
    force (m);
}