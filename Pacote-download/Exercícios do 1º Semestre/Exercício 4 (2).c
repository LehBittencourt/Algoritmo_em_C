/*4 – Elabore um programa em C que preencha um vetor com 10 números reais, calcule e mostre a 
quantidade de números negativos e a soma dos números positivos desse vetor. */

#include <stdio.h>

int main(){
    int num[10], i, cont=0, soma=0;
    
    for(i=0;i<10;i++){
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &num[i]);
    
    if(num[i]<0){
        cont++;
    } else{
        soma+=num[i];
    }
    
    }
    
    printf("Quantidade de numeros negativos: %d\n", cont);
    printf("Soma dos numeros positivos: %d", soma);
    
    return 0;
}


/*Obs: tentei com float, mas o programa nao rodou e nao consegui descobrir o porquê. Vou deixar um comentario aqui só pra caso eu esqueça de tirar a dúvida na sala. :) */