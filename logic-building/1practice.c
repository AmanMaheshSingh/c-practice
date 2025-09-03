#include <stdio.h>

int update(int d,int b) {
    // Complete this function
    
     d = d + b ;
     b = d - b - b; 
     if (b<0)
     b=-b;
     printf("hii\n");
     return b;
     printf("hello\n");
    
     
}

int main() {
    int a, b;
    int d;
   
    
    scanf("%d %d", &a, &b);
    d = update(a, b);
    printf("%d",d);
    
    
    return 0;
}
