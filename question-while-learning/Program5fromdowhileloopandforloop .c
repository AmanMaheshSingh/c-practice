#include <stdio.h>

int main ()
{
    int i=1;
    int sum=0;
    for(i=1; i<=10 ; i++){ 
        sum+=i;
    }
    printf("the sum of first 10 natural number is (for loop) \n%d ",sum);
    


{
    int i=1;
    int sum=0;
    
    do{
    sum +=i;
    i++;
    }while(i<=10);
    printf("\nthe sum of first 10 natural number is (do while loop) \n%d",sum);
}
}
