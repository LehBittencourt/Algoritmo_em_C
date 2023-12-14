/* 6. Acrescente no exercício anterior as funções de subtração, multiplicação e divisão dos números 
digitados*/

#include <stdio.h>

int soma(int n1, int n2) {
    int soma=0;
    
    soma = n1 + n2;
    
    return soma;
}

int subtracao(int n1, int n2) {
    int subtracao=0;
    
    subtracao = n1 - n2;
    
    return subtracao;
}


int multiplicacao(int n1, int n2) {
    int multiplicacao=0;
    
    multiplicacao = n1 * n2;
    
    return multiplicacao;
}

float divisao(int n1, int n2) {
    float divisao=0;
    
    divisao = n1 / n2;
    
    return divisao;
}

int main() {
    int n1, n2, resultado_soma=0, resultado_subtracao=0, resultado_multiplicacao=0; 
    float resultado_divisao=0;

    //Declarando as variaveis
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    //Variavel resultado recebe a funcao
    resultado_soma = soma(n1, n2);
    resultado_subtracao = subtracao(n1, n2);
    resultado_multiplicacao = multiplicacao(n1, n2);
    resultado_divisao = divisao(n1,n2);

    //Imprimindo o resultado
    printf("\n%d + %d = %d\n", n1, n2 ,resultado_soma);
    printf("%d - %d = %d\n", n1, n2 ,resultado_subtracao);
    printf("%d * %d = %d\n", n1, n2 ,resultado_multiplicacao);
    printf("%d / %d = %.2f\n", n1, n2, resultado_divisao);
    
    return 0;
}
