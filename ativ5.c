#include <stdio.h>

int main() {
    int matriz[5][5];
    int i, j, valor, Ivalor, Jvalor;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Digite o valor para a linha %d e coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Digite o valor que voce quer procurar: \n");
    scanf("%d", &valor);

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (valor == matriz[i][j]) {
                Ivalor = i;
                Jvalor = j;
            }
        }
    }

    printf("\nValores da matriz:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Localizacao do valor: \neixo X: %d \neixo Y: %d \n", Ivalor, Jvalor);

    return 0;
}


