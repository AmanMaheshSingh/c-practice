#include<stdio.h>
#include <string.h>

int main()
{
    /*char st[4];
    sc
    anf("%s",st);
    printf("%s",st);*/
    char st[5];
    for(int i=0;i<4;i++){
    scanf(" %c",&st[i]);
    }
    st[4]='\0';
    printf("%c", st[4]);
    return 0;
}