//Write a program to reverse an Array.
#include<stdio.h>

void reverse(int* arr,int n){
    for(int i = 0 , j = n-1;i<j;i++,j--){
        int e = arr[i];
        arr[i]=arr[j];
        arr[j]=e;
    }
}

void main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int length = sizeof(arr)/sizeof(arr[0]);
    reverse(arr,length);
    for(int i = 0 ; i<length;i++){
        printf("%d ",arr[i]);
    }
}

