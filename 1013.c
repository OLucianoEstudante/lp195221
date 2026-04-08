#include <stdio.h>
 
int main() {
 
    /*Como não sei se tem uma fórmula para saber o maior entre 3 números, 
    resolverei o problema com if else*/
    
    //criando variaveis do tipo integer (inteiro)
    int N1, N2, N3;
    
    /*o usuário irá colocar três números separados por espaço,
    o primeiro número será o N1, e a lógica segue até o N3*/
    scanf("%d %d %d", &N1, &N2, &N3);
    
    /*if checará se N1 é o maior número, 
    e se sim o printf dele mandará um output correspondente*/
    if (N1 > N2 && N1 > N3) {
        printf("%d eh o maior\n", N1);
    }
    /*a mesma lógica do anterior, mas agora checando apenas dois números,
    e esse else if checara se N2 é o maior e mandará o output se sim*/
    else if (N2 > N3){
        printf("%d eh o maior\n", N2);
    }
    // o else. Mandará um output se todos os outros forem falsos
    else {
        printf("%d eh o maior\n", N3);
    }

    return 0;
}
