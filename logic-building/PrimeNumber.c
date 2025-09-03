#include <stdio.h>

int main()
{
    int e;
    int flag = 0;
    printf("Enter a Number\n");
    scanf("%d",&e);
    for (int i = 2; i < e; i++)
    {
        if(e%i==0)
        flag++;
    }
    if(flag)
    printf("%d is not a prime number",e);
    else 
    printf("%d is a prime number",e);

    return 0;
}