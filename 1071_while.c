/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1071
Data        : 15/04/2026
Objetivo    : Ler dois valores inteiros e mostrar a somas dos numeros impares entre os valores dados.
Aprendizado : Aprendido o uso da funcao while
-------------------------------------------------------------------------- */

#include <stdio.h>

int main()
{
  int X, Y, N, R;
    
  scanf("%d", &X);
  scanf("%d", &Y);

  //Pelos exemplos, os numeros sao fechados, não usados no resultado
  N=Y+1;
  R = 0;

  /*metodo while, se a variavel de contagem for igual ao primeiro numero
  o programa para, pois usamos numeros fechados*/
  while (N<X) {
    if (N%2 == 1 || N%2 == -1){
      R = R + N;
      }
        
      N = N + 1;
        
  }
    
  printf("%d\n", R);

  return 0;
}
