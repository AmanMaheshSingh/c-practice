#include <stdio.h>

int printNaturalNumbers(int n) {
    if (n == 0)
        return 0;
    
    
    
    // printf("%d ", n);
    return n + printNaturalNumbers(n - 1);
}

int main() {
    int N,s;
    printf("Enter a number: ");
    scanf("%d", &N);

    printf("First %d natural numbers are:\n", N);
    s = printNaturalNumbers(N);
    printf("%d",s);
    
    return 0;
}
