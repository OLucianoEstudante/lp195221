/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Luciano de Andrade da Silva Netto
Linguagem   : C++
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1175
Data        : 21/06/2026
Objetivo    : imprimir um vetor ao contrario
Aprendizado : biblioteca algorithm e funcao reverse
-------------------------------------------------------------------------- */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> vetor(20);

    for (int i = 0; i < 20; i++)
    {
        cin >> vetor[i];
    }
    reverse(vetor.begin(), vetor.end());
    for (int a = 0; a < 20; a++)
    {
        cout << "N[" << a << "] = " << vetor[a] << "\n";
    }
    return 0;
}
