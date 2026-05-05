/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Luciano de Andrade da Silva Netto
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1241
Data        : 05/05/2026
Objetivo    : ver se o final de numero 2 é igual ao final de numero 1
Aprendizado : uso de strcmp e uso de vector[equacao]
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>

int main() {
    int  N, tamA, tamB;
    char A[1001], B[1001];

    scanf("%d", &N);

    for (int v=0; v<N; v++) {
        scanf("%s %s", &A, &B);

        tamA = strlen(A);
        tamB = strlen(B);

        if (tamB <= tamA && strcmp(&A[tamA - tamB], B) == 0) {
            printf("encaixa\n");
        } else {
            printf("nao encaixa\n");
        }
    }

    return 0;
}
