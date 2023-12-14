/*2 – Faça um programa em C que leia um vetor de 8 posições e, em seguida, leia também dois 
valores X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa deverá 
escrever a soma dos valores encontrados nas respectivas posições X e Y . */

#include <stdio.h>

int main(){
    int num[8], x, y, i;
    
    for(i=0;i<8;i++){
        printf("Digite o %dº numero: ", i);
        scanf("%d", &num[i]);
    }
    
    printf("Digite a posicao x do vetor: ");
    scanf("%d", &x);
    
    printf("Digite a posicao y do vetor: ");
    scanf("%d", &y);
    
    printf("A soma de %d e %d e: %d", x, y, num[x]+num[y]);
    
    return 0;
}
