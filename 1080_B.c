/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Luciano de Andrade da Silva Netto
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1080
Data        : 18/04/2026
Objetivo    : Ler cem valores inteiros positivos e mostrar o maior numero e sua posicao.
Aprendizado : Reforco do uso do for
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
  //Veri para verificacao, n para numero e I para input
  int I, Veri, n;
  
  Veri = 0;
  n = 0;

  /*loop de 100 vezes, verifica se o valor colocado é o maior de todos 
  e salva o valor e sua posicao (numero de input)*/
  for(int t=1;t<101;t++){
    scanf("%d", &I);
    if (I>Veri){
      Veri=I;
      n=t;
    }
  }
  printf("%d\n%d\n", Veri, n);

  return 0;
}
