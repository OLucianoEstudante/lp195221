/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Luciano de Andrade da Silva Netto
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 2758
Data        : 16/04/2026
Objetivo    : especificar como sera o output de dados
Aprendizado : mais formas de especificacao de formato (quantas casas e notacao cientifica)
-------------------------------------------------------------------------- */

#include <stdio.h>

int main()
{
    float A, B;
    double C, D;
    //"%f" por ser precisao simples, "lf" por ser precisao dupla
    scanf("%f %f", &A, &B);
    scanf("%lf %lf", &C, &D);
    
    //output normal
    printf("A = %f, B = %f\n", A, B);
    printf("C = %lf, D = %lf\n", C, D);
    
    //output com uma casa de precisao
    printf("A = %.1f, B = %.1f\n", A, B);
    printf("C = %.1lf, D = %.1lf\n", C, D);
    
    //output com duas casas de precisao
    printf("A = %.2f, B = %.2f\n", A, B);
    printf("C = %.2lf, D = %.2lf\n", C, D);
    //output com tres casas de precisao
    printf("A = %.3f, B = %.3f\n", A, B);
    printf("C = %.3lf, D = %.3lf\n", C, D);
    
    //"%E" eh usado para notacao cientifica, e esta em tres casas de precisao
    printf("A = %.3E, B = %.3E\n", A, B);
    printf("C = %.3E, D = %.3E\n", C, D);
    
    // output com zero casas de precisao, como se fosse um inteiro
    printf("A = %.0f, B = %.0f\n", A, B);
    printf("C = %.0lf, D = %.0lf\n", C, D);
    
    return 0;
}
