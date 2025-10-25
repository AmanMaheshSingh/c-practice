//Write a Program to return the nth row of Pascal's triangle.
#include <stdio.h>

void generateNthrow(int N)
{
    // nC0 = 1
    int prev = 1;
    printf("%d", prev);

    for (int i = 1; i <= N; i++) {
        // nCr = (nCr-1 * (n - r + 1))/r
        int curr = (prev * (N - i + 1)) / i;
        printf(",%d ", curr);
        prev = curr;
    }
}

int main()
{
    int n ;
    printf("Enter The Value of n\n");
    scanf("%d",&n);
    generateNthrow(n);
    return 0;
}