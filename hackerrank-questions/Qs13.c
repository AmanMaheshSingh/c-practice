#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int intt;
    char st[1000];
    int aray[10]={0,0,0,0,0,0,0,0,0,0};
    scanf("%s",st);
    for(int i=0;st[i] != '\0'; i++){
        // printf("%c",st[i]);
        intt = st[i] - '0';
        if(intt>=0 && intt<=9){
            aray[intt]++;
        }
    
    }
    for(int j = 0 ; j<10 ; j++){
        printf("%d ",aray[j]);
    }

        
    return 0;
}
