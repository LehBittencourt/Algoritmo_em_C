/*2. Codifique, compile e execute um programa que leia três números. Para cada número, imprima 
o dobro. Use uma função que recebe como parâmetro um número inteiro e devolve o seu dobro. O 
valor calculado deve ser impresso na função principal. */

#include <stdio.h>

int dobro(int n){
    return n*2;
}

int main(){
    int n1, n2, n3;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);
    
    printf("O dobro de %d e: %d", n1, dobro(n1));
    printf("O dobro de %d e: %d", n2, dobro(n2));
    printf("O dobro de %d e: %d", n3, dobro(n3));

    return 0;
}
