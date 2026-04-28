/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Luciano de Andrade da Silva Netto
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1078
Data        : 28/04/2026
Objetivo    : tabelinha de um numero input
Aprendizado : uso de %d e seu resultado
-------------------------------------------------------------------------- */

#include <stdio.h>

int main()
{
    int N; //como na questao
    
    scanf("%d", &N);

  //m de multiplicacao. utilizado m<11 pois acho que m<=10 seria mais pesado
    for (int m =1; m<11; m++){
        
        printf("%d x %d = %d\n", m, N, m*N); //(m*N) para melhor leitura humana
        
    }

    return 0;
}
