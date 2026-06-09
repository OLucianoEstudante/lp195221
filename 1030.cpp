/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Luciano de Andrade da Silva Netto
Linguagem   : C++
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1030
Data        : 09/06/2026
Objetivo    : Saber qual numero sobrevive
Aprendizado : reforço de funcoes recursivas
Pergunta de segunda ordem: o return da funcao recursiva nao eh natural ainda
-------------------------------------------------------------------------- */

#include <iostream>
using namespace std;
int sobrevive(int n, int k){
    if (n == 1) return 0;
    return (sobrevive(n - 1, k) + k) % n;
    
}

int main(){
    int Vezes, n, k, caso;
    caso=0;
    
    cin >> Vezes;
    
    for (int i=0; i < Vezes; i++){
        caso ++;
        cin >> n >> k;
        cout << "Case " << caso << ": " << sobrevive(n,k) + 1 << endl;
        
    }

    return 0;
}
