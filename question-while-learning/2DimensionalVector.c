#include <stdio.h>

struct Vector{
    int i;
    int j;
};

int main()
{
    struct Vector v = {1, 2};
    printf("The Value Of Vector is %di + %dj",v.i,v.j);
    
    return 0;
}