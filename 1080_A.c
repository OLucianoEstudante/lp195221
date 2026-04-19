/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Luciano de Andrade da Silva Netto
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1080
Data        : 18/04/2026
Objetivo    : Ler cem valores inteiros positivos e mostrar o maior numero e sua posicao.
Aprendizado : Uso do vetor e como usar suas informacoes
-------------------------------------------------------------------------- */

#include <stdio.h>
 
int main() {
  int Numeros [100];
  int M = 0;
  int rank = 0;

  /*vetor tem 100 espacos, e como v comeca no 0, v nao pode ser 100 ou mais,
  e esse for serve para colocar valor no vetor ao mesmo tempo que verifica
  qual valor eh o maior e sua posicao + 1*/
  for(int v=0;v<100;v++){
    scanf("%d", &Numeros[v]);
    if (Numeros[v]>M){
      M = Numeros[v];
      rank = v+1;
    }
  }
  printf("%d\n%d\n", M, rank);

  return 0;
}
