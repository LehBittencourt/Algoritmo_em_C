/*1 – Escrever um programa que declare um vetor de 20 inteiros, leia um valor para cada posição e 
no final mostre quantos elementos possuem valor maior, menor e igual ao primeiro elemento do 
vetor.*/

#include <stdio.h>

int main(){
    int num[20], i, cont_igual=0, cont_maior=0, cont_menor=0;
    
    for(i=0;i<20;i++){
        printf("Digite o %d valor: ", i+1);
        scanf("%d", &num[i]);
    }
    
    for(i=0;i<20;i++){
        if(num[0]>num[i]){
            cont_menor++;
        } else if(num[0]<num[i]){
            cont_maior++;
        } else{
            cont_igual++;
        }
    }
    
    printf("Quantidade de numeros menores: %d\n", cont_menor);
    printf("Quantidade de numeros maiores: %d\n", cont_maior);
    printf("Quantidade de numeros iguais: %d\n", cont_igual);
    
    return 0;
}
