#include<stdio.h>

int main()
{
    int n ;
    int i ;
    int prime =0;
    printf("tell the number \n");
    scanf("%d",&n);
    
    for (i=2;i<n;i++){
        if (n%i == 0 ){
        prime = 1;
        break;
    }
 }
    if (prime){
    printf("given number %d is not prime number",n);
    }
    else {
    printf("given number %d is a prime number",n);
    }
}