#include<stdio.h>

int main()
{
    int Length;
    int Width;
    printf("Enter Length Of Rectangle\n");
    scanf("%d", &Length );
    printf("Enter Width Of Rectangle\n");
    scanf("%d", &Width );
    printf("Area Of Rectangle Is\n%d", Length*Width);
    return 0;
}