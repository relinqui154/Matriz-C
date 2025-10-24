#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int A[4][4], i, j;
    srand(time(NULL));

    printf("Matriz original:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            A[i][j] = rand() % 20 + 1;
            printf("%3d ", A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz triangular inferior:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (j > i)
                A[i][j] = 0;
            printf("%3d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}

