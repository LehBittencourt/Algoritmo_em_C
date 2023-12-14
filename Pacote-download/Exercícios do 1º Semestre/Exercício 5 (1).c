/*5 – Crie um programa em C que leia dois vetores inteiros de 20 posições. Ao final crie um terceiro 
vetor de 20 posições que terá nas posições pares os valores contidos nas mesmas posições do 
primeiro vetor e nas ímpares os valores na mesma posição do segundo vetor.*/

#include <stdio.h>

int main(){
    int vetor1[20], vetor2[20], vetor3[20], i;
    
    i++;

    while (/* condition */)
    {
        /* code */
    }
    

    printf("Digite o %dº numero: ", i+1);
        scanf("%d", &vetor1[i]);
    }
    
    for(i=0;i<20;i++){
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &vetor2[i]);
    }
    
    for(i=0;i<20;i++){
        if(vetor1[i]%2 == 0){
            vetor3[i] = vetor1[i];
        } else if(vetor2[i]%2 == 1){
            vetor3[i] = vetor2[i]; 
        }
    }
    
    for(i=0;i<20;i++){
        printf("Posicao %dº do 3º vetor: %d\n", i+1, vetor3[i]);
    }
      

    return 0;
}
