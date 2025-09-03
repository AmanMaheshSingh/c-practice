#include <stdio.h>

int main ()
{
    float a,b,c;
    float d;
    
    printf("of how many marks the exam was \n");
    scanf("%f",&d);
    float f=d+d+d;
    printf("how many marks you got in each subject \n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    if(((a+b+c)/f)*100 >=40)
        printf("YOU HAVE PASSED");
    else if ((a/d)*100 && (b/d)*100 && (c/d)*100 >=33)
        printf("YOU PASSED BUT BARELY");
    else
        printf("you failed");
    return 0;    
}
