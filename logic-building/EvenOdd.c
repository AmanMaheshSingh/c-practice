#include <stdio.h>

int main()
{
    int n;
    printf("Entre the Number\n");
    scanf("%d",&n);
    if(n&1==0)
    printf("The Given Number %d is Even\n",n);
    else
    printf("The Given Number %d is Odd\n",n);

    return 0;
}