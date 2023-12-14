/*1. Faça um programa em C que lê três palavras do teclado e imprime as três palavras na ordem inversa.*/
/*Todos exercícios eu fiz com %s porque o compilador que estou usando está dando erro quando uso scanf("%[^\n]s",palavra1); .*/

#include <stdio.h>
#include <string.h>

int main() {
    char palavra1[50], palavra2[50], palavra3[50];
    int i, tam1, tam2, tam3;
    
    //Declarando as palavras
    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);
    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);
    printf("Digite a terceira palavra: ");
    scanf("%s", palavra3);
    
    tam1 = strlen(palavra1);
	tam2 = strlen(palavra2);
	tam3 = strlen(palavra3);
    
    //Imprimindo as palavras
    printf("\nPrimeira palavra: ");
    for(i=tam1;i>=0;i--){
        printf("%c", palavra1[i]);
    }
    
    printf("\nSegunda palavra: ");
    for(i=tam2;i>=0;i--){
        printf("%c", palavra2[i]);
    }
    
    printf("\nTerceira palavra: ");
    for(i=tam3;i>=0;i--){
        printf("%c", palavra3[i]);
    }
    
    return 0;
}