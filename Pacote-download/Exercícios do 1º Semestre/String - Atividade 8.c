/* 8 ‐ Desenvolva um programa em C que receba uma String transforme
todas as letras em maiúsculas, copie em outro vetor de caractere de mesmo
tamanho e ao final imprima as duas Strings.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char palavra1[50], palavra2[50];
    int i;
    
    //Declarando a variavel
    printf("Digite uma palavra: ");
    scanf("%s", palavra1);
    
    //Copiando palavra 1 para palavra 2
    strcpy(palavra2,palavra1);
    
    //Transformando a variavel em maiuscula
    while(palavra2[i]){
        palavra2[i] = toupper(palavra2[i]);
        i++;
    }
    
    //Imprimindo variaveis
    printf("Palavra minuscula: %s\n", palavra1);
    printf("Palavra maiuscula: %s", palavra2);
    
    return 0;
}