#include <stdio.h>

int main() {
    char gabarito[10];
    char respostas[3][10];
    int matricula[3];
    int nota[3] = {0};
    int i, j, aprovados = 0;

    printf("Digite o gabarito (10 respostas - a, b, c, d ou e):\n");
    for (j = 0; j < 10; j++) {
        scanf(" %c", &gabarito[j]);
    }

    for (i = 0; i < 3; i++) {
        printf("\nDigite a matrícula do aluno %d: ", i + 1);
        scanf("%d", &matricula[i]);

        printf("Digite as 10 respostas do aluno %d:\n", i + 1);
        for (j = 0; j < 10; j++) {
            scanf(" %c", &respostas[i][j]);
            if (respostas[i][j] == gabarito[j])
                nota[i]++;
        }
    }

    printf("\nRESULTADOS:\n");
    for (i = 0; i < 3; i++) {
        printf("Matrícula: %d\n", matricula[i]);
        printf("Respostas: ");
        for (j = 0; j < 10; j++)
            printf("%c ", respostas[i][j]);
        printf("\nNota: %d\n\n", nota[i]);

        if (nota[i] >= 7)
            aprovados++;
    }

    float percentual = (aprovados / 3.0) * 100;
    printf("Percentual de aprovação: %.2f%%\n", percentual);

    return 0;
}
