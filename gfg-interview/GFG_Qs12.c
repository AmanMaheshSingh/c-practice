//Check whether a number is a palindrome.
#include <stdio.h>

int CheckPalidrome(int);

int CheckPalidrome(int N){
    int P=N;
    int R=0;
    while(P!=0){
        R = R*10+(P%10);
        P=P/10;
    } 
    if(R==N){
        printf("%d is a Palindrome\n",N);
    }
    else{
        printf("%d is not a Palindrome\n",N);
    }
}

void main(){
    int n = 152439;
    int m = 13431;

    CheckPalidrome(n);
    CheckPalidrome(m);
}