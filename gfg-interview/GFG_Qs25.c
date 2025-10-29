//Write a Program for the cyclic rotation of an array to k positions.
#include<stdio.h>

void cyclic(int arr[],int s,int e){
    int temp;
    while(s<e){
        temp = arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        s++;
        e--;
    }
}

void main(){
    int arr[]={0,1,2,3,4,5,6,7,8,9},k;
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Enter K\n");
    scanf("%d",&k);
    cyclic(arr,0,n-1);
    cyclic(arr,0,k-1);
    cyclic(arr,k,n-1);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
}