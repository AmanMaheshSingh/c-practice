#include<stdio.h>

int main()
{
    /*int n ;
    int i = 2;
    int prime =0;
    printf("tell the number \n");
    scanf("%d",&n);
    
    while (i<n){
        if (n%i == 0 ){
        prime = 1;
        break;
    }
    i++;
 }
    if (prime){
    printf("given number %d is not prime number",n);
    }
    else {
    printf("given number %d is a prime number",n);
    }*/
    int n ;
    int i = 2;
    int prime =0;
    printf("tell the number \n");
    scanf("%d",&n);
    
    do{
        if (n%i == 0 ){
        prime = 1;
        break;
    }
    i++;
 }while (i<n);
    if (prime){
    printf("given number %d is not prime number",n);
    }
    else {
    printf("given number %d is a prime number",n);
    }
    
}