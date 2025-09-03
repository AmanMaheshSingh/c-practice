#include<stdio.h>
#include<string.h>

int main()
{
    char str[] = "nbj!bnbo!iv!zbl!hsfbuftu!dpeefs";
    for(int i = 0 ; i < strlen(str);i++){
        str[i]= str[i] - 1; //nbj!bnbo!iv!zbl!hsfbuftu!dpeefs
    } 
    printf("%s",str);
    return 0;
}