/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Luciano de Andrade da Silva Netto
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1169
Data        : 01/06/2026
Objetivo    : quantos litros serao utilizados
Aprendizado : funcao e return
-------------------------------------------------------------------------- */

#include <stdio.h>
float calcularlitros(int tempo, int velocidade){

    float distancia, litros;

    distancia = tempo*velocidade;

    litros = distancia/12.0; 
    //12.0 parentemente é um bom habito para divisoes floats

    return litros;

}

int main(){

int horas, kmh;

    scanf("%d", &horas);
    scanf("%d", &kmh);

    printf("%.3f\n", calcularlitros(horas, kmh));

    return 0;
}
