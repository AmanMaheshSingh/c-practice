//Write a program to check the repeating elements in C.
#include <stdio.h>

int sort(int arr[],int n){
    for(int i = 0 ; i < n-1;i++){
        for(int j = 0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int e = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=e;
            }
        }
    }
}

int repeat(int arr[],int n){
    for(int i = 0 ; i<n;i++){
        int flag = 0;
        while (i < n-1 && arr[i]==arr[i+1])
        {
            flag = 1;
            i++;
        }
        if(flag)
        printf("%d ",arr[i-1]);
    }
}

void main(){
    int arr[] = {7,7,3,8,3,7,7,6,0,3};
    int l = sizeof(arr)/sizeof(arr[0]);
    sort(arr,l);
    repeat(arr,l);
}