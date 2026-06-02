/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Luciano de Andrade da Silva Netto
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1168
Data        : 02/06/2026
Objetivo    : saber quantas partes de led foram acesas
Aprendizado : uso de switch
-------------------------------------------------------------------------- */

#include <string.h>
#include <stdio.h>

int main(){
    char V[101];
    int N, resposta;

    scanf("%d\n", &N);

    for(int i = 0; i < N; ++i){
        // Note a correção: passamos apenas 'V', pois o nome do vetor já é um ponteiro
        scanf("%s", V); 

        resposta = 0;
        int tam = strlen(V);
        
        for(int j = 0; j < tam; ++j){
            // O switch avalia o caractere atual do texto
            switch(V[j]) {
                case '1': 
                    resposta += 2; 
                    break;
                case '7': 
                    resposta += 3; 
                    break;
                case '4': 
                    resposta += 4; 
                    break;
                case '2': 
                case '3': 
                case '5': 
                    resposta += 5; 
                    break;
                case '0': 
                case '6': 
                case '9': 
                    resposta += 6; 
                    break;
                case '8': 
                    resposta += 7; 
                    break;
            }
        }

        printf("%d leds\n", resposta);
    }

    return 0;
}
