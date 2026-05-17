/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Luciano de Andrade da Silva Netto
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1534
Data        : 17/05/2026
Objetivo    : matriz formada por 1(diagonal), 2(anti-diagonal), e 3(o resto)
Aprendizado : uso de ponteiros em casos de matriz e como manipular dados com ponteiros
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        int matriz[n][n];
        int *p = &matriz[0][0]; // p aponta para o endereco da matriz 0,0

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i + j == n - 1)
                    *(p + i * n + j) = 2; //expressao usada para o ponteiro identificar o local da matriz
                else if (i == j)
                    *(p + i * n + j) = 1;
                else
                    *(p + i * n + j) = 3;
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d", *(p + i * n + j));
            }
            printf("\n");
        }
    }
    return 0;
}
