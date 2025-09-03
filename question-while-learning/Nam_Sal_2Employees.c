//Take name and salary of two employee as input from the user and write them to a text file in the following format:1> Name 1, 3300 2> Name 2, 7700.
#include<stdio.h>

void main()
{
    FILE *ptr;
    ptr = fopen("file4.txt","w");
    int salary1 , salary2 ;
    char name1[50],name2[50];
    printf("Enter Name and Salary of 1st Person:\n");
    scanf("%s %d",name1,&salary1);
    printf("Enter Name and Salary of 2nd Person:\n");
    scanf("%s %d",name2,&salary2);

    fprintf(ptr,"%s, %d\n",name1,salary1);
    fprintf(ptr,"%s, %d\n",name2,salary2);
    fclose(ptr);
}