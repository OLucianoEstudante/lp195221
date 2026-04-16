/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Luciano de Andrade da Silva Netto
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 2757
Data        : 16/04/2026
Objetivo    : outputs de quatro variaveis, mostrando diferentes formas de como apresenta-la
Aprendizado : especificacao de formato (adicionar espacos e como prencher eles)
-------------------------------------------------------------------------- */

#include <stdio.h>

int main()
{
    int A, B, C;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    
    //output comum, mostra os valores das variaveis
    printf("A = %d, B = %d, C = %d\n", A, B, C);
    //output: variaveis em 10 espaços, n no final
    printf("A = %10d, B = %10d, C = %10d\n", A, B, C);
    //output: variaveis em 10 espaços (preenchidos por 0), n no final
    printf("A = %010d, B = %010d, C = %010d\n", A, B, C);
    //output: variaveis em 10 espaços, n no começo
    printf("A = %-10d, B = %-10d, C = %-10d\n", A, B, C);

    return 0;
}
