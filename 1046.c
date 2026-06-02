/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Luciano de Andrade da Silva Netto
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1169
Data        : 01/06/2026
Objetivo    : saber quantos horas o jogo durou
Aprendizado : funcao e return
-------------------------------------------------------------------------- */

#include <stdio.h>
int calcularhoras (int inicio, int fim){

    int duracao;

    if (inicio < fim){
        duracao = fim - inicio;
    }
    else{
        duracao = 24 - inicio + fim;
    }

    return duracao;

}

int main(){

    int inicio, fim;

    scanf("%d", &inicio);
    scanf("%d", &fim);

    printf("O JOGO DUROU %d HORA(S)\n", calcularhoras(inicio, fim));

    return 0;
}
