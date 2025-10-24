#include <stdio.h>

int main() {
    int A[3][3], soma = 0, i;

    for (i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &A[i][j]);

    for (i = 0; i < 3; i++)
        soma += A[i][2 - i];

    printf("Soma da diagonal secundaria: %d\n", soma);
    return 0;
}

