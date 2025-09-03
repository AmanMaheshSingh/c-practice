#include<stdio.h>

int main()
{
    int n =3;
    int i =0;
    int j =0;
    for (i=0;i<n;i++){
    for (j=0;j<2*i+1;j++){
    printf("*");
    }
    printf("\n");
    }
    return 0;
}