#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Entre three Numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    printf("Among 3 Numbers %d,%d,%d the Greatest Number is %d",a,b,c,a);
    else if(b>a && b>c)
    printf("Among 3 Numbers %d,%d,%d the Greatest Number is %d",a,b,c,b);
    else if(c>a && c>b)
    printf("Among 3 Numbers %d,%d,%d the Greatest Number is %d",a,b,c,c);
    else 
    printf("Every Number Should be Different");

    return 0;
}