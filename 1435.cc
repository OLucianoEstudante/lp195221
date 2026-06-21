/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Luciano de Andrade da Silva Netto
Linguagem   : C++
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1435
Data        : 21/06/2026
Objetivo    : matriz quadrada com numeros mais ao centro sendo maiores
Aprendizado : reforço de matrizes
-------------------------------------------------------------------------- */

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    int N;

    while (cin >> N && N != 0)
    {
        vector<vector<int>> matriz (N, vector<int>(N, 1));

        for (int i = 1; i < N; i++)
        {
            for (int linha = 0; linha < N; linha++)
            {
                for (int coluna = 0; coluna < N; coluna++)
                {
                    if (linha >= i && linha <= N - 1 - i && coluna >= i && coluna <= N - 1 - i)
                    {
                        matriz[linha][coluna] = i + 1;
                    }
                }
            }
        }
        for (int linha = 0; linha < N; linha++)
        {
            for (int coluna = 0; coluna < N; coluna++)
            {

                if (coluna == 0)
                {
                    // Se for o primeiro número da linha, não põe espaço antes
                    cout << setw(3) << matriz[linha][coluna];
                }
                else
                {
                    // Se não for o primeiro, põe um espaço para separar do anterior
                    cout << " " << setw(3) << matriz[linha][coluna];
                }
            }
            // Quando termina uma linha inteira, pula para a próxima linha
            cout << "\n";
        }

        // O Beecrowd pede uma linha em branco APÓS cada matriz
        cout << "\n";
    }
    return 0;
}
