/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Luciano de Andrade da Silva Netto
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1029
Data        : 13/06/2026
Objetivo    : coisa de fibunacci
Aprendizado : funcao derivativa
-------------------------------------------------------------------------- */

#include <stdio.h>

// variavel global
int calls;

int fibunacci(int x)
{

    calls++;

    if (x == 0)
    {
        return 0;
    }

    else if (x == 1)
    {
        return 1;
    }
    
    else
    {
        return fibunacci(x - 1) + fibunacci(x - 2);
    }
}

int main()
{
    int vezes, numerofib, resultado;

    scanf("%d", &vezes);

    for (int i = 0; i < vezes; i++)
    {
        calls = 0;
        scanf("%d", &numerofib);
        resultado = fibunacci(numerofib);
        printf("fib(%d) = %d calls = %d\n", numerofib, calls-1, resultado);
    }

    return 0;
}
