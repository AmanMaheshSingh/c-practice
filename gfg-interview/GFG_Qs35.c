//Write a program to check string is a palindrome.
#include<stdio.h>

void main(){
    char s[100],r[100];
    printf("Enter Your String To Check for Palindrome\n");
    scanf("%s",s);
    int i,z,j,flag=0;
    for(z = 0;s[z]!='\0';z++){
        continue;
    }
    for(i = 0,j=z-1;j>=0;i++,j--){
        r[i]=s[j];
    }
    r[i]='\0';
    for ( i = 0; i < z; i++)
    {
        if(s[i]!=r[i])
        flag=1;
        break;
    }
    
    if(flag==0)
    printf("Its A Palindrome\n");
    else
    printf("Its A Not Palindrome\n");
    
}