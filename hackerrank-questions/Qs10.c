#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int size = 2 * n - 1; // NEW: total rows/columns

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            
            // NEW PART START
            int top = i;
            int left = j;
            int bottom = size - 1 - i;
            int right = size - 1 - j;

            int min_dist = top;
            if (left < min_dist) min_dist = left;
            if (bottom < min_dist) min_dist = bottom;
            if (right < min_dist) min_dist = right;

            printf("%d ", n - min_dist);
            // NEW PART END
        }
        printf("\n");
    }
    return 0;
}
