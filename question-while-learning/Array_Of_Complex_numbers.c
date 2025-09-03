//Create an Array of 5 Complex Numbers and display them with the help of a display function .The Values Must be taken as an input from the user.
#include <stdio.h>

struct comNum
{
    int real;
    int imaginary;
};

void display (int,int);

void display(int a,int b){
    printf("The Complex Number is %d + %di\n",a,b);
}

void main()
{
    struct comNum c[5];
    for(int i = 0;i<5;i++){
        printf("Enter the real Number (Only Positive) :\n");
        scanf(" %d",&c[i].real);
        printf("Enter the imaginary Number (Only Positive) :\n");
        scanf(" %d",&c[i].imaginary);
        display(c[i].real,c[i].imaginary);
    }
    
}