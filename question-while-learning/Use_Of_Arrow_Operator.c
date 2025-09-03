//Write a Program to illustrate the use of Arrow Operator  in C.
#include <stdio.h>

struct coder
{
    int no_of_code;
    float months_taken;
};

void main()
{
    struct coder one;
    struct coder *ptr;

    ptr = &one;
    ptr->no_of_code=37;
    ptr->months_taken=2.13;
    printf("Coder 1 Took %.2f Months And Made %d Codes\n",ptr->months_taken,ptr->no_of_code);
}
