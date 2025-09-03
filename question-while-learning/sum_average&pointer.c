#include<stdio.h>

int s(int,int);

int s(int x,int y ){
    int s= x+y;
    printf("the value of sum is %d\n",s);
    int* ptr_s =&s;
    return ptr_s;
}
float avg(float,float);

float avg(float x,float y ){
    float avg= (x+y)/2;
    printf("The Value of average is %f\n",avg);
    float* ptr_avg =&avg;
    return *ptr_avg;
    }
    
int main()
{
    int j = 3;
    int i=6;
    int ptr_s;
    int ptr_avg;
    
    s(i,j);
    avg(i,j);
    printf("the address of sum is %u and average is %u",&ptr_s,&ptr_avg);
    
    
    return 0;
}