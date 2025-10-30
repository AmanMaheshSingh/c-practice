// Write a Program to find the transpose of a matrix.
#include <stdio.h>

#define ROWS 3
#define COLS 3

void transpose(int rows, int cols, int A[][COLS], int B[][ROWS]);

void transpose(int rows, int cols, int A[][COLS], int B[][ROWS]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            B[j][i] = A[i][j];
        }
    }
}

void main() {
    int A[ROWS][COLS] = {
        {1, 1, 1},
        {2, 2, 2},
        {3, 3, 3}
    };
    int B[COLS][ROWS];

    transpose(ROWS, COLS, A, B);

    printf("Transpose of the matrix:\n");
    for (int i = 0; i < COLS; i++) {
        for (int j = 0; j < ROWS; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
}
