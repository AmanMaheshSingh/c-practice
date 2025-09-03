#include<stdio.h>
char* slice (char str[], int m, int n) {
    int i =0;
    char* ptr1 = &str[m];
    char* ptr2 = &str[n];
    
    str = ptr1;
    str[n]= '\0';
    return str; 
    
    
}

int main()
{
    char st[]="Dark Geeks";
    printf("%s",slice(st,1,5));
    return 0;
}