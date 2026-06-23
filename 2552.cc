/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Luciano de Andrade da Silva Netto
Linguagem   : C++
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1030
Data        : 22/06/2026
Objetivo    : campo minado. saber onde tem paodequeijo ou quantos paes adjacentes
Aprendizado : EOF em C++ e reforco de matriz
Pergunta de segunda ordem: 
-------------------------------------------------------------------------- */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Otimização para deixar a leitura mais rápida aparentemente
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int linhas, colunas;

    // EOF
    while (cin >> linhas >> colunas) {
        

        vector<vector<int>> campo(linhas, vector<int>(colunas));
        for (int i = 0; i < linhas; i++) {
            for (int j = 0; j < colunas; j++) {
                cin >> campo[i][j];
            }
        }

        for (int i = 0; i < linhas; i++) {
            for (int j = 0; j < colunas; j++) {
                
                if (campo[i][j] == 1) {
                    cout << 9;
                }
                else {
                    int paes_vizinhos = 0;

                    // cima
                    if (i - 1 >= 0 && campo[i - 1][j] == 1) paes_vizinhos++;
                    // baixo
                    if (i + 1 < linhas && campo[i + 1][j] == 1) paes_vizinhos++;
                    // esquerda
                    if (j - 1 >= 0 && campo[i][j - 1] == 1) paes_vizinhos++;
                    // direita
                    if (j + 1 < colunas && campo[i][j + 1] == 1) paes_vizinhos++;

                    //cout, dessa forma o output nao eh uma matriz. mais facil de mexer
                    cout << paes_vizinhos;
                }
            }
            cout << "\n";
        }
    }

    return 0;
}
