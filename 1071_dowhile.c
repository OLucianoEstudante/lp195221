/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1071
Data        : 15/04/2026
Objetivo    : Ler dois valores inteiros e mostrar a soma dos numeros impares entre os valores dados.
Aprendizado : Aprendido o uso de do while
-------------------------------------------------------------------------- */

#include <stdio.h>

int main()
{
  int X, Y, N, R;
    
  scanf("%d", &X);
  scanf("%d", &Y);
    
  N=Y+1;
  R = 0;

  //do while, semelhante ao while mas faz a checagem depois
  //nesse caso, não foi muito diferente do while
  do {
    if (N%2 == 1 || N%2 == -1){
      R = R + N;
    }
    N++;
    
  }while (N<X);
    
  printf("%d\n", R);

  return 0;
}
