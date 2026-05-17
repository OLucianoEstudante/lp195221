/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Luciano de Andrade da Silva Netto
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1534
Data        : 17/05/2026
Objetivo    : matriz formada por 1(diagonal), 2(anti-diagonal), e 3(o resto)
Aprendizado : o uso de EOF e como matematica simples para matrizes
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    int n;
    //end of file, pedido pelo exercicio e para o while quando nao tiver nada para ler
    while (scanf("%d", &n) != EOF) {
        //2 for para formar matrix quadrada
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i + j == n - 1)   
                //nos exemplos, o dois tem prioridade de aparecimento
                //cada lugar de matiz (0 ate n-1) que der soma de n-1 tera o 2
                    printf("2");
                else if (i == j)  
                //quando for numeros iguais dara 1
                    printf("1");
                else
                //o resto eh 3
                    printf("3");
            }
            printf("\n");
        }
    }
    return 0;
}
