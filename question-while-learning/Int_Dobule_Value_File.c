//Write a Program To Modify a File Containing an integer to Double its value.
#include<stdio.h>

void main()
{
    FILE *ptr;
    int num;
    ptr = fopen("file5.txt","r");
    fscanf(ptr,"%d",&num);
    fclose(ptr);

    ptr = fopen("file5.txt","w");
    fprintf(ptr,"%d",num*2);
    fclose(ptr);
}