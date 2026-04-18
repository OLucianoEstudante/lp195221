/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Luciano de Andrade da Silva Netto
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1071
Data        : 18/04/2026
Objetivo    : Ler dois valores inteiros e mostrar a soma dos numeros impares entre os valores dados.
Aprendizado : Aprendido o uso de for e entendimento de incremento (N++)
-------------------------------------------------------------------------- */

#include <stdio.h>

int main()
{
  int X, Y, R;
    
  scanf("%d", &X);
  scanf("%d", &Y);
    
  R = 0;

  /*for, da forma que fiz, cria uma variavel, depois faz uma checagem e no final faz outra ação,
    nesse caso um incremento. Uma forma menor comparado ao while*/
  for (int N = Y+1; N<X; N++) {
    if (N%2 == 1 || N%2 == -1){
      R = R + N;
      }
  }
    
  printf("%d\n", R);

  return 0;
}
