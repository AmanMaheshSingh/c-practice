#include <stdio.h>

int main ()
{
    int n,s=0;
    printf("Entre the number\n");
    scanf("%d",&n);
    int last = s += n%10;
    printf("The last number of given number %d is %d ",n,last);

    return 0;
}