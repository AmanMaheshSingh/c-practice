#include<stdio.h>
int no_of_possitive (int a[],int n){
    int no_of_possitive = 0;
    for (int i=0;i<n;i++){
        if(a[i]>0){
        no_of_possitive++;
        }
    }
    return no_of_possitive;
    
}

int main()
{
    int n[] ={1,2,-3,4,-5,6,7,-8,9,-10};
    printf("positive number in this array is %d ",no_of_possitive(n,10)); 
    return 0;
}