/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Luciano de Andrade da Silva Netto
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1169
Data        : 28/05/2026
Objetivo    : saber quantos KG de graos tem 
Aprendizado : funcao derivativa
-------------------------------------------------------------------------- */

#include <stdio.h>

unsigned long long ngraos(int n){

    if (n==0){
        return 0;
    }
    return 2*ngraos(n-1) +1;

}

int main(){


    int vezes, casas;

    scanf("%d", &vezes);

    for(int i=0; i<vezes; i++){
        scanf("%d", &casas);
        printf("%llu Kg\n", ngraos(casas)/12000);
   }

    return 0;
}
