#include <stdio.h>

int main()
{
    int n;
    printf("Entre the Number\n");
    scanf("%d",&n);
    if (n>0){
        printf("The Given Number %d is Positive\n",n);
    }
    else if(n<0){
        printf("The Given Number %d is Negative\n",n);
    }
    else {
        printf("The Given Number is Zero");
    }

    return 0;
}