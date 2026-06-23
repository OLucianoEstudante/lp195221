/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Luciano de Andrade da Silva Netto
Linguagem   : C++
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1030
Data        : 22/06/2026
Objetivo    : Verificar se o sudoku apresentado eh valido ou nao
Aprendizado : matrizes
Pergunta de segunda ordem: 
-------------------------------------------------------------------------- */


#include <iostream>

using namespace std;

int sudoku[9][9];

int resultado = 0;

int verificarLinha(int x)
{
    int verificacao[10] = {0};
    for (int i = 0; i < 9; i++)
    {
        int numero = sudoku[x][i];
        if (verificacao[numero] == 1)
        {
            resultado++;
        }
        verificacao[numero] = 1;
    }
    return resultado;
}

bool verificarColuna(int x)
{
    int verificacao[10] = {0};
    for (int i = 0; i < 9; i++)
    {
        int numero = sudoku[i][x];

        if (verificacao[numero] == 1)
        {
            resultado++;
        }
        verificacao[numero] = 1;
    }
    return resultado;
}

int verificarQuadrado(int x)
{
    int verificacao[10] = {0};

    int linhaInicio = (x / 3) * 3;
    int colunaInicio = (x % 3) * 3;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int numero = sudoku[linhaInicio + i][colunaInicio + j];
            if (verificacao[numero] == 1)
            {
                resultado++;
            }
            verificacao[numero] = 1;
        }
    }

    return resultado;
}

int main()
{
    int vezes;
    cin >> vezes;

    for (int i = 1; i <= vezes; i++)
    {
        resultado = 0;

        for (int linha = 0; linha < 9; linha++)
        {
            for (int coluna = 0; coluna < 9; coluna++)
            {
                cin >> sudoku[linha][coluna];
            }
        }

        for (int a = 0; a < 9; a++)
        {
            verificarLinha(a);
            verificarColuna(a);
            verificarQuadrado(a);
        }

        cout << "Instancia " << i << endl;
        if (resultado == 0)
        {
            cout << "SIM" << endl;
        }
        else
        {
            cout << "NAO" << endl;
        }
        cout << endl;
    }

    return 0;
}
