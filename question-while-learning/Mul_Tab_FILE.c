//Write a program to generate multiplication table of a given number in text format.Make sure that the file is readable and well formated.
#include <stdio.h>

void main()
{
    FILE *ptr;
    int num ;
    printf("Enter the Table to be Printed:\n");
    scanf("%d",&num);
    ptr = fopen("file2.txt","w");
    for(int i = 1 ; i <=10;i++){
        fprintf(ptr,"%d x %d = %d\n",num,i,(num*i));
    }
    fclose(ptr);
}