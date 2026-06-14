/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Luciano de Andrade da Silva Netto
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1179
Data        : 13/06/2026
Objetivo    : imprimir conteudos de vetores quando vetor eh preenchido ou quando acaba os 15 inputs
Aprendizado : colocar valores em inputs e onde colocar logica (for, nesse caso)
-------------------------------------------------------------------------- */

#include <stdio.h>

int main()
{
    int par[5], impar[5], numero, posiimpar = 0, posipar = 0;

    for (int i = 0; i < 15; i++)
    {

        scanf("%d", &numero);

        //saber se o numero eh par ou impar
        if (numero % 2 == 0)
        {
            par[posipar] = numero;
            posipar++;
        }
        else
        {
            impar[posiimpar] = numero;
            posiimpar++;
        }

        //se a posicao for 5 os vetores sao imprimidos e depois a posicao eh resetada
        if (posiimpar == 5)
        {
            for (int b = 0; b < posiimpar; b++)
            {
                printf("impar[%d] = %d\n", b, impar[b]);
            }
            posiimpar = 0;
        }

        if (posipar == 5)
        {
            for (int a = 0; a < posipar; a++)
            {
                printf("par[%d] = %d\n", a, par[a]);
            }
            posipar = 0;
        }
    }

    //logica para entregar os vetores mesmo nao preenchidos
    for (int b = 0; b < posiimpar; b++)
    {
        printf("impar[%d] = %d\n", b, impar[b]);
    }

    for (int a = 0; a < posipar; a++)
    {
        printf("par[%d] = %d\n", a, par[a]);
    }
    return 0;
}
