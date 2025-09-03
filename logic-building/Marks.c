#include <stdio.h>

int main()
{
    int m;
    printf("Entre Your Marks\n");
    scanf(" %d", &m);
    if(m>90 && m<=100)
    printf("You got A Grade at %d Marks\n",m);
    else if(m>80 && m<=90)
    printf("You got B Grade at %d Marks\n",m);
    else if(m>70 && m<=80)
    printf("You got C Grade at %d Marks\n",m);
    else if(m>60 && m<=70)
    printf("You got D Grade at %d Marks\n",m);
    else if(m>50 && m<=60)
    printf("You got E Grade at %d Marks\n",m);
    else if(m<=50)
    printf("You got F Grade  AND YOU FAILED at %d Marks\n",m);
    else
    printf("Minimum Marks 1 And Maximum Marks 100\n");

    return 0;
}