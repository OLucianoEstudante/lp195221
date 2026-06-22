/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Luciano de Andrade da Silva Netto
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1031
Data        : 22/06/2026
Objetivo    : Saber quantos pulos para a regiao 13 ser a ultima
Aprendizado : forma de chamar funcoes, uso de vetores
Pergunta de segunda ordem: 
-------------------------------------------------------------------------- */

#include <iostream>
#include <vector>
using namespace std;

int wellington (int n, int m)
{
    vector<int> regioes;
    
    for (int i=2; i <= n; i++){
        regioes.push_back(i);
    }
    
    int indice = 0;
    
    while (regioes.size() > 1){
        indice = (indice + m - 1) % regioes.size();
        
        regioes.erase (regioes.begin() + indice);
        
    }
    
    
    return regioes[0];

 }
 
int main() {
    
    int n;
    
    while (cin >> n && n != 0){
        int m=1;
        
        while (true){
            if (wellington(n,m) == 13){
                cout << m << endl;
                break;
            }
            m++;
            
        }

    }
    
    return 0;
}
