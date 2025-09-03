#include<stdio.h>
#include<string.h>

int main()
{
    int count =0;
    int c='!';
    char str[] = "nbj!bnbo!iv!zbl!hsfbuftu!dpeefs";
    for(int i = 0 ; i < strlen(str);i++){
        if (str[i]==c){
            count=1;
            break;
        }
    } 
    if (count){
        printf("Yes It Contains");
    }
    else {
        printf("No Dose Not Contains");
    }
    
    return 0;
}