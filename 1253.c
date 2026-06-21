/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Luciano de Andrade da Silva Netto
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1253
Data        : 05/05/2026
Objetivo    : cifra de cesar: quantas cifras ter e quantas casas a direita ir
Aprendizado : cuidados com o gets e getchar(), uso de char e a tabela ASCII
-------------------------------------------------------------------------- */

#include <stdio.h>

int main()
{
    int v, l, deslocamento;
    char texto[51];
    
    scanf("%d", &v);
    //limpa o \n do scanf v(ezes), fazendo o gets agir normalmente
    getchar();

    //quantas vezes se repete
    for (int i=0; i <v; i++){
        gets(texto);
        scanf("%d", &deslocamento);
        /*limpa o \n do scanf deslocamento, permitindo
        um gets "limpo"*/
        getchar();

      //logica para deslocar todas as letras do texto variavel vezes a direita
        for (l=0; texto[l] != '\0'; l++){
            texto[l]= (texto[l] - 'A' - deslocamento + 26) % 26 + 'A';
            /*formula importante pois as letras devem ficar entre A e Z (65 e 90),
            o primeiro passo faz o numero ser entre 0 e 25,
            o segundo passo subtrai o deslocamento,
            o terceiro passo soma o numero de letras no alfabeto
            o quarto passo assegura que não ultrapasse o numero 90,
            ultimo passo transforma o numero em uma letra na ASCII*/
        
        }
        printf("%s\n", texto); //printf no loop para ter varias cifras
    }
    
    return 0;
}
