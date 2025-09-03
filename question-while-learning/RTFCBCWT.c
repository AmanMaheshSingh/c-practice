//Write a program to read a text file character by character and write its content twice in seprate file.
#include<stdio.h>

void main()
{
    FILE *ptr;
    FILE *ptr2;
    char ch;
    ptr = fopen("file1.txt","r");
    ptr2 = fopen("file3.txt","w");
    while(1){
        ch = fgetc(ptr);
        if(ch == EOF){
            break;
        }
        else{
            fprintf(ptr2,"%c",ch);
            fprintf(ptr2,"%c",ch);
        }
    }
    fclose(ptr);
    fclose(ptr2);
}