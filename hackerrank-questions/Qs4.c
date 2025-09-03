
#include <stdio.h>


int greatest_numbers (int x,int y,int z,int n){
    if( x > y && x > z && x > n){
        return x;
    }
    else if(y > x && y > z && y > n){
        return y;
    }
    else if(z > x && z >y && z > n){
        return z;
    }
    else if(n > x && n > y && n > z ){
        return n;
    }
    else {
        return -1;
    }
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = greatest_numbers(a, b, c, d);
    if (ans == -1){
        printf("Each Number Should Be 'Unique'");
    }
    else{
        printf("%d",ans);
    }
    
    return 0;
}
