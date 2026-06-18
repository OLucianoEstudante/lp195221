/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Luciano de Andrade da Silva Netto
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1028
Data        : 18/06/2026
Objetivo    : Saber qual o minimo divisor comum
Aprendizado : reforço de funcoes recursivas
Pergunta de segunda ordem: a logica para achar o minimo divisor comum
-------------------------------------------------------------------------- */

#include <stdio.h>

int divisao(int x, int y){
    
    if (y==0) {return x;} //se y for 0, o x tera sera o return
    else {return divisao (y, x%y);} 
    /* else funciona trocando o numero de lugar e vendo o resto do x%y 
    (fazendo com que os novos int x seja maior que int y), ate o y ser 0*/
}

int main()
{
    int vezes, v1, v2;
    
    scanf ("%d", &vezes);
    
    for (int i = 0; i < vezes; i++){ //logica simples
        
        scanf ("%d %d", &v1, &v2);
        
        printf ("%d\n", divisao (v1, v2)); //chama a funcao
        
    }

    return 0;
}
