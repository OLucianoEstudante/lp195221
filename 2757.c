#include <stdio.h>

int main()
{
    int A, B, C;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    
    //output comum, mostra os valores das variaveis
    printf("A = %d, B = %d, C = %d\n", A, B, C);
    //output: variaveis em 10 espaços, n no final
    printf("A = %10d, B = %10d, C = %10d\n", A, B, C);
    //output: variaveis em 10 espaços (preenchidos por 0), n no final
    printf("A = %010d, B = %010d, C = %010d\n", A, B, C);
    //output: variaveis em 10 espaços, n no começo
    printf("A = %-10d, B = %-10d, C = %-10d\n", A, B, C);

    return 0;
}
