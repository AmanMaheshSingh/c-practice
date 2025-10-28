//Write a Program to print the Maximum and Minimum elements in an array.
#include <stdio.h>

void FindMaxMin(int arr[],int l){
    int max = arr[0];
    int min = arr[0];
    for (int i = 0;i<l;i++){
        if(max<arr[i])
        max = arr[i];
        if(min>arr[i])
        min=arr[i];
    }
    printf("Maximum : %d\nMinimum : %d\n",max,min);
}

void main(){
    int size;
    printf("Enter How Many Numbers you Want to Enter\n");
    scanf("%d ",&size);
    int arr[size];
    printf("Enter The Numbers\n");
    for(int i = 0 ;i <size;i++){
        scanf("%d",&arr[i]);
    }
    FindMaxMin(arr,size);
}