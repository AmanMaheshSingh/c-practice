#include <stdio.h>

int main ()
{
    float a,b,c;
    printf("Write three numbers to know its average\n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    printf("The average of numbers %.2f,%.2f and %.2f is %.2f",a,b,c,(a+b+c)/3.0);

    return 0;
}

