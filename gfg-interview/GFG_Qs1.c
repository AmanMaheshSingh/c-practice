//Find the largest number among the three numbers.
#include <stdio.h>

void main()
{
    int a,b,c;
    printf("Enter Three values\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
        printf("%d is Bigger than %d and %d\n",a,b,c);
    else if(b>a && b>c)
        printf("%d is Bigger than %d and %d\n",b,a,c);
    else if(c>a && c>b)
        printf("%d is Bigger than %d and %d\n",c,a,b);
    else if(a == b && b == c)
        printf("All Are Equal\n");
    else
        printf("Error! Enter only integers Nothin Else\n");
}