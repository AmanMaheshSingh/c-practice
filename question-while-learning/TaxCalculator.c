#include <stdio.h>

int main()
{
    int i;
    printf("enter your salary \n");
    scanf("%d",&i);
    if(i>=250000 && i<=500000 )
        printf("in your salary you have to pay 5%% tax \n%d",(5*i)/100);
    else if(i>500000 && i<=1000000)
        printf("in your salary you have to pay 20%% tax \n%d",(2*i)/100);
    else if(i>1000000) 
        printf("in your salary you have to pay 30%% tax \n%d",(30*i)/100);
    else
        printf("in your salary you have to pay no tax"); 
}