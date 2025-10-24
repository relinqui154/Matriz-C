#include <stdio.h>

int main() {
    int A[3][3], soma = 0, i, j;

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &A[i][j]);

    for (i = 1; i < 3; i++)
        for (j = 0; j < i; j++)
            soma += A[i][j];

    printf("Soma abaixo da diagonal: %d\n", soma);
    return 0;
}
