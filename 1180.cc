/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Luciano de Andrade da Silva Netto
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1180
Data        : 22/06/2026
Objetivo    : Saber qual o menor numero e sua posicao no vetor
Aprendizado : reforco de vetor e formas de input
Pergunta de segunda ordem: forma de input
-------------------------------------------------------------------------- */

#include <iostream>
#include <vector>

using namespace std;
 
int main() {
 
    int tamanho, menor, posicao;
    
    cin >> tamanho;
    
    vector <int> vetor (tamanho);
    
    for (int i=0; i< tamanho; i++){
        cin >> vetor[i];
    }
    menor = vetor[0];
    for (int j=0; j< tamanho; j++){
        if (vetor [j] < menor){
            menor = vetor [j];
            posicao = j;
        }
    }
    cout <<"Menor valor: " << menor << endl << "Posicao: " << posicao << endl;
 
    return 0;
}
