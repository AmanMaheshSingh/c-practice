#include <stdio.h>

int main ()
{
    int a;
    printf("Enter A Number To Check If The Number Is Divisible By 97 Or Not \n");
    scanf("%d",&a);
    printf("If The Number You Entered Came Back Then The Number Is Not Divisible By 97 And If 0 Came It Is Divisible By 97 \n%d",a%97);
    return 0;
    
}
