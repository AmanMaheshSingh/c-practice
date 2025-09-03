#include <stdio.h>

int main()
{
    int n,i=1,s=0;
    printf("Entre The Amount of Numbers you Want to See\n");
    scanf("%d",&n);
    while(i<=n){
        s+=i;
        printf("%d ",s);
        i++;
    }

    return 0;
}