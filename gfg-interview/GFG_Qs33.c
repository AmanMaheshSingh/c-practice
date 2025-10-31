//Write a program to count the sum of numbers in a string.
#include <stdio.h>

void main()
{
    char s[] = "124259";
    int ans = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        int ele = s[i] - 48;
        if (ele <= 9)
            ans += ele;
    }
    printf("%d", ans);
}