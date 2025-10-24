#include <stdio.h>

int main() {
    int matriz[4][4];
    int i, j, maiorValor = 0, Imaior, Jmaior;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Digite o valor para a linha %d e coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] > maiorValor) {
                maiorValor = matriz[i][j];
                Imaior = i;
                Jmaior = j;
            }
        }
    }

    printf("\nValores da matriz:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Localizacao do maior valor: \neixo X: %d \neixo Y: %d \n", Imaior, Jmaior);

    return 0;
}


