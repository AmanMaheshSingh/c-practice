/*Write a program to form Pascal Triangle using numbers.
        1   
      1   1   
    1   2   1   
  1   3   3   1   
1   4   6   4   1
*/
#include <stdio.h>

void main(){
    int N = 5;
    for(int i = 1;i<=N;i++){
        for(int j = 1;j<=N-i;j++){
            printf("  ");
        }
        int x =1;
        for(int j = 1;j<=i;j++){
            printf("%4d",x);
            x = x*(i-j)/j;
        }
        printf("\n");
    }
}