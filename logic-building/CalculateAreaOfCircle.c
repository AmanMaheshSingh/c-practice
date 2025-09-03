#include <stdio.h>

int main()
{
    float r;
    printf("Write the radius of circle\n");
    scanf("%f",&r);
    printf("The area circle with radius %.2f is %.2f",r,r*r*3.14);

    return 0;
}