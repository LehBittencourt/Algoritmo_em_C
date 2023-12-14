/* 5. Elabore um programa em C que leia duas Strings. Se as Strings forem iguais escreva 
“Strings iguais”. Caso contrário, concatene (junte) as duas Strings e imprima a String 
resultante.*/

#include <stdio.h>
#include <string.h>

int main(){
    char palavra1[50], palavra2[50];
    int i, j;
    
    //Declarando as variaveis
    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);
    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);
    
    if(strcmp(palavra1, palavra2) == 0){
        printf("Strings Iguais");
    } else {
        printf("%s", strcat(palavra1, palavra2));
    }
    
    return 0;
}

