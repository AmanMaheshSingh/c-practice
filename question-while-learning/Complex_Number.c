// Write a Program with a structure  Representing A complex Number.
#include <stdio.h>

struct comNum
{
    int real;
    int imaginary;
};

// int complex( int a, int b  ){
//     return 
// }

void main()
{
    struct comNum one;
    one.imaginary = 3;
    one.real = 5;
    printf("The Complex Number is %d + %di",one.real,one.imaginary);
}