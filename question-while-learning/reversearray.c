#include<stdio.h>
void printArry(int a[],int n){
    for (int i=0;i<n;i++){
        printf("%d",a[i]);
}
    printf("\n");
}

void reverceArry(int a[],int n){
    int temp;
    for(int i=0;i<n/2;i++){
        temp = a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
}

int main()
{
    int arry[] = {1,2,3,4,5,6};
    printArry(arry,6);
    reverceArry(arry,6);
    printArry(arry,6);
    return 0;
}