/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Luciano de Andrade da Silva Netto
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1441
Data        : 18/06/2026
Objetivo    : Saber o maior numero da Sequencia de Granizo
Aprendizado : reforço de funcoes recursivas
Pergunta de segunda ordem: entender o problema (receber diversos inputs e para no 0)
-------------------------------------------------------------------------- */

#include <stdio.h>

int Granizos(int h, int maior){
    
    if (h > maior) {maior = h;}
    
    if (h==0) {return 0;}
    if (h==1) {return maior;}
    
    if (h%2 == 0) {h = 0.5*h; return Granizos(h, maior);}
    else {h = 3*h + 1; return Granizos(h, maior);}
  
}

int main()
{
    int granizo;
    
    while (scanf ("%d", &granizo)){
        
        if (granizo == 0) {break;} //faz os inputs pararem no input 0
    
        printf("%d\n", Granizos(granizo, granizo));
        /* eh seguro fazer o maior ser o input no comeco,
        pois se for 1 o maior sera 1, se for 11 o maior 
        comecara no 11 e terminara com um numero maior*/
    }
    
    return 0;
}
