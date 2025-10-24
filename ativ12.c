#include <stdio.h>

int main() {
    int A[3][3], T[3][3], i, j;

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &A[i][j]);

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            T[j][i] = A[i][j];

    printf("Matriz transposta:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%3d ", T[i][j]);
        printf("\n");
    }

    return 0;
}

