/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Luciano de Andrade da Silva Netto
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1234
Data        : 26/04/2026
Objetivo    : Palavra(s) que fica(m) alternando em maiuscula e minuscula
Aprendizado : uso de string, char, string.h, ctype.h e gets
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char texto[51];
    int M, n;
    
    while(gets(texto) !=NULL){
        M = 0;
        n = strlen(texto);
        for (int i = 0; i < n; i++){
            if (isalpha(texto[i])){
                if(M%2 == 0){
                    texto[i] = toupper(texto[i]);
                }
                else{
                    texto[i] = tolower(texto[i]);
                }
                
                M++;
            }
        
        }
        printf("%s\n", texto);
    }

    return 0;
}
