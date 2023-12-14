/* 5. Codifique, compile e execute um programa na linguagem C que leia dois elementos e os passe 
como parâmetros em uma função soma que deverá retornar o valor da soma desses dois 
elementos. Em seguida imprima o resultado na função principal. */

#include <stdio.h>

int soma(int n1, int n2) {
    int soma=0;
    
    soma = n1 + n2;
    
    return soma;
}

int main() {
    int n1, n2, resultado;

    //Declarando as variaveis
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    //Variavel reesultado recebe soma
    resultado = soma(n1, n2);

    //Imprimindo o resultado
    printf("A soma dos numeros e: %d\n", resultado);

    return 0;
}
