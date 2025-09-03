#include <stdio.h>

void printEven(int n) {
    if (n == 0)
        return;
    
    printEven(n - 1); // recursive call
    printf("%d ", 2 * n); // print nth even number
}

int main() {
    int n;
    printf("Enter how many even natural numbers to print: ");
    scanf("%d", &n);

    printf("First %d even natural numbers:\n", n);
    printEven(n);

    return 0;
}
