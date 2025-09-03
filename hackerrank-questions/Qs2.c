#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    scanf("%c",&ch);
    char s[100];
    scanf("%s",s);
    char sen[500];
    scanf("\n");
    scanf("%[^\n]%*c%s",sen);
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s",sen); 
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
