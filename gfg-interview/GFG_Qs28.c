//Write a Program to Find if there is any subarray with a sum equal to 0.
#include <stdio.h>

void main(){
    int arr[]={2,-3,1,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum,flag = 0 ;

    for(int i = 0 ; i<n; i++){
        sum=0;
        for (int j = i; j < n ; j++){
            sum+=arr[j];
            if(sum==0){
                flag=1;
                printf("True Subarray with 0 sum is possible\n");
                break;
            }
        }
    }
    if(flag==0){
        printf("No Such Condition\n");
    }
}