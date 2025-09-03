// Write a program to read Three integer from a file.
#include <stdio.h>

void main()
{
    FILE *ptr;
    int num;
    ptr = fopen("file1.txt", "r");
    for (int i = 1; i <= 3; i++)
    {
        fscanf(ptr, "%d", &num);
        printf("%d\n", num);
    }
    fclose(ptr);
}