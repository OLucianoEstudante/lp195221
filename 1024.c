/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Luciano de Andrade da Silva Netto
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1024
Data        : 07/05/2026
Objetivo    : criptografia
Aprendizado : strrev nao funcionou, entao criar uma logica para inverter string, perigo de nao redefinir variaveis (comeco), uso dos decimais em ASCII
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>

int main()
{
    int vezes;
    char texto[1001];
    int comeco, finale; //final virou finale pois github deixava o nome antigo em vermelho
    char temp;
    
    scanf("%d", &vezes);
    getchar();
    
    for(int q=0; q<vezes; q++){
        
        gets(texto);
        
        comeco = 0;
        finale = strlen(texto) - 1;
        //precisa refedinir eles para a logica de inversao funcionar

        //logica usando o sistema ASCII, qualquer letra move 3 posicoes
        for(int a=0 ; texto[a] != '\0';a++){
            if(texto[a]>=65 && texto[a]<=122){
                texto[a]+= 3;
            }
        }

        //logica de inversao, sendo necessarias variaveis exclusivas para esse uso 
        while(comeco < final){
            temp = texto[comeco];
            texto[comeco] = texto[final];
            texto[finale] = temp;
            
            comeco++;
            finale--;
        }

        //todo caracter do meio em diante move uma posicao a esquerda, usando sistema ASCII
        for(int b = (strlen(texto)/2); texto[b] != '\0'; b++){
            texto[b]-= 1;
        }
        
        printf("%s\n", texto); //printf dentro do loop para ter os outputs requisitados
    }

    return 0;
}
