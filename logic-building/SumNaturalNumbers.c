#include <stdio.h>

int main(){
    int n,i,s=0;
    printf("Entre the amount of Natural Number to be Summed\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        s+=i;
    }
    printf("The Sum is %d",s);

    return 0;
}