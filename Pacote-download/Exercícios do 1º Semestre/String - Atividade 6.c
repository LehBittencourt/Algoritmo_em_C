/* 6. Faça um programa em C que receba uma String e verifique se ela é um
Palíndromo.*/

#include <stdio.h>
#include <string.h>

int main(){
    char palavra1[50], palavra2[50];
    int i=0, j, tam1=0, k=0, cont=0;
    
    //Declarando a palavra
    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);
    
    //Declarando tamanho da variave
    tam1 = strlen(palavra1);
    
    //Invertendo a palavra
    for(j=tam1-1;j>=0;j--){
        palavra2[k] = palavra1[j];
        k++;
    }
    
    //Comparando se e igual
    for(i=0;i<tam1;i++){
        if(palavra1[i] == palavra2[i]){
            cont++;
        }
    }
    
    //Imprimindo o resultado
    if(cont == tam1){
        printf("A palavra e palindroma.");
    } else {
        printf("A palavra nao e palindroma: ");
    }
    
    return 0;
}

