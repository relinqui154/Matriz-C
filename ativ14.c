#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int cartela[5][5], i, j, num, repetido;

    srand(time(NULL));

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            do {
                repetido = 0;
                num = rand() % 100;
                for (int x = 0; x <= i; x++)
                    for (int y = 0; y < (x == i ? j : 5); y++)
                        if (cartela[x][y] == num)
                            repetido = 1;
            } while (repetido);
            cartela[i][j] = num;
        }
    }

    printf("Cartela de Bingo:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++)
            printf("%3d ", cartela[i][j]);
        printf("\n");
    }

    return 0;
}

