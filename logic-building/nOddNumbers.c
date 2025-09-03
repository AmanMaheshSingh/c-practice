#include <stdio.h>

int main()
{
    int n,i,s=0;
    printf("Enter the Amount\n");
    scanf("%d",&n);
    for(i=1;i<=n*2;i++){
        if(i%2!=0){
            s+=i;
        }
    }
    printf("%d",s);

    return 0;
}