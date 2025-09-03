//Write A Program To Represent Complex Number Using Structure and Type.def.
#include <stdio.h>

typedef int a;

typedef struct
{
    a real;
    a imaginary;
}comNum;

void main()
{
    comNum one;
    one.imaginary = 3;
    one.real = 5;
    printf("The Complex Number is %d + %di",one.real,one.imaginary);
}