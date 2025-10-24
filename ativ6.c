#include <stdio.h>

int main() {
    int matriz1[4][4], matriz2[4][4], matriz3[4][4];
    int i, j;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Digite o valor da matriz 1 para a linha %d e coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz1[i][j]);
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Digite o valor da matriz 2 para a linha %d e coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz2[i][j]);
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (matriz1[i][j] >= matriz2[i][j]) {
                matriz3[i][j] = matriz1[i][j];
            } else {
                matriz3[i][j] = matriz2[i][j];
            }
        }
    }

    printf("\nValores da matriz:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", matriz3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
