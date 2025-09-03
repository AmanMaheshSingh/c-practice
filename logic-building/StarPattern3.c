#include <stdio.h>

int main()
{
    int i,j,x;
    printf("Enter the Amount of Lines\n");
    scanf("%d",&x);
    for(i = 1;i<=x;i++){
        for(j=1;j<=(x-1)*2+1;j++){
            if(j>=x-(i-1)&&j<=x+(i-1))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}