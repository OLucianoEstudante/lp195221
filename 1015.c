/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Luciano de Andrade da Silva Netto
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1015
Data        : 17/05/2026
Objetivo    : calcular a distancia entre dois pontos, usando a localizacao x e y de cada um
Aprendizado : uso da biblioteca math.h, raiz quadrada (sqrt) e elevado (pow) para simplificar o codigo
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <math.h>

int main() {
//math.h para ter acesso ao sqrt e pow

    float x1, x2, y1, y2, resultado;
    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);

    //sqrt pega a raiz quadrada de um numero, pow(a,b) pega o numero em a e eleva ele pelo numero em b
    resultado = sqrt(pow((x2-x1),2)+pow((y2-y1),2));

    //exercicio pediu resultado em 4 casas decimais
    printf("%.4f\n", resultado);

    return 0;
}
