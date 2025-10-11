//Find the Leader arr =[2,5,1,17,9,1,5,2]
// output: [17,9,5,2]
#include<stdio.h>
void main(){
    int arr[8] = {2,5,1,17,9,1,5,2}, arr1[8],k=0;
    for (int i = 0; i < 8; i++)
    {
        int c = 0;
        for (int j = i+1; j < 8 ; j++)
        {
            if(arr[i]<arr[j]){
                c++;
            }
        }
        if(c==0){
            arr1[k++] = arr[i];
            // k++;
        }
    }
    printf("Leaders: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", arr1[i]);
    }
    
}