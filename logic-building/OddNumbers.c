#include <stdio.h>

int main()
{
    int n;
    printf("Enter How Many Odd Number You Want to know\n");
    scanf("%d",&n);
    for(int i = 1 ; i<n*2;i++){
        if(i%2!=0)
        printf("%d\n",i);
    }

    return 0;
}