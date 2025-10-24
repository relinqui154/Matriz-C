#include <stdio.h>

int main() {
    int matriz[4][4];
    int i, j, count = 0;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Digite o valor para a linha %d e coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (matriz[i][j] > 10) {
                count++;
            }
        }
    }

    printf("Quantidade de valores maiores que 10: %d", count);

    return 0;
}
