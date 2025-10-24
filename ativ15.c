#include <stdio.h>

int main() {
    char respostas[5][10], gabarito[10];
    int resultado[5] = {0};
    int i, j;

    printf("Digite o gabarito (10 respostas a, b, c ou d):\n");
    for (j = 0; j < 10; j++)
        scanf(" %c", &gabarito[j]);

    for (i = 0; i < 5; i++) {
        printf("Respostas do aluno %d:\n", i + 1);
        for (j = 0; j < 10; j++) {
            scanf(" %c", &respostas[i][j]);
            if (respostas[i][j] == gabarito[j])
                resultado[i]++;
        }
    }

    printf("\nPontuação dos alunos:\n");
    for (i = 0; i < 5; i++)
        printf("Aluno %d: %d acertos\n", i + 1, resultado[i]);

    return 0;
}

