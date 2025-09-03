#include <stdio.h>

int main()
{
    int n,x=0,k;
    printf("Enter The Number\n");
    scanf("%d",&n);
    while (n>0)
    {
        k=n%10;
        x=x*10+k;
        n=n/10;
    }
    printf("%d",x);    

    return 0;
}