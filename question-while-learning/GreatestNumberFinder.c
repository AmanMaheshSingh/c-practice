#include <stdio.h>

int main()
{
    int a,b,c,d;
    printf("give ypur single digit numbers \n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    if (a>b && a>c && a>d)
    printf("greatest number is \n%d",a);
    else if (b>a && b>c && b>d)
    printf("greatest number is \n%d",b);
    else if (c>a && c>b && c>d)
    printf("greatest number is \n%d",c);
    else if (d>a && d>b && d>c)
    printf("greatest number is \n%d",d);
    else 
    printf("each numer should be different");
}  