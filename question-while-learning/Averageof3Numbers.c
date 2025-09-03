#include <stdio.h>

float average (float,float,float);

float average (float x , float y , float z ){
printf("The Average of %.2f, %.2f & %.2f is %.2f",x,y,z,(x+y+z)/3);
}

int main()
{
    float a =77.00;
    float b =45.00;
    float c =33.00;
    
    average (a,b,c);
}