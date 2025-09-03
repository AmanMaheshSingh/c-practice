//Write a function "Sum Vector" Which Returns The Sum of two Vectors Passed to it . The vectors must be two dimensional.

#include<stdio.h>

struct Vec{
    float x;
    float y;
};

// float sumVector(float,float,float,float);

// float sumVector(float x1,float x2,float y1,float y2){
//     float A = x1 + x2 ;
//     float B = y1 + y2 ;
//     return (A,B);
// }

struct Vec sumVector(struct Vec V1,struct Vec V2){
    struct Vec result;
    result.x = V1.x + V2.x;
    result.y = V1.y + V2.y;
    return result;
};

void main ()
{
    struct Vec V1;
    printf("Entre Vector 1:\n");
    scanf(" %f %f",&V1.x,&V1.y);
    struct Vec V2;
    printf("Entre Vector 2:\n");
    scanf(" %f %f",&V2.x,&V2.y);
    // float b = sumVector(V1.x,V2.x,V1.y,V2.y);
    struct Vec b = sumVector(V1,V2);
    printf("The Sum of Two Give Vector is (%.2f,%.2f)\n",b.x,b.y);
}