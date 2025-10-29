//Write a Program to sort First half in Ascending order and the Second in Descending order.
#include <stdio.h>

void AcendDecend(int arr[],int n){
    int temp;
    for(int i = 0 ;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i]>arr[j]){
            temp = arr[i];
            arr[i]= arr[j];
            arr[j]=temp;
            }
        }
    }
    for (int i = 0 ;i<(n/2);i++){
        printf("%d ",arr[i]);
    }
    for(int j = n-1;j>=(n/2);j--){
        printf("%d ",arr[j]);
    }
}

void main(){
    int arr[] = {22,33,42,5,66,63,88};
    int n = sizeof(arr)/sizeof(arr[0]);
    AcendDecend(arr,n);
}