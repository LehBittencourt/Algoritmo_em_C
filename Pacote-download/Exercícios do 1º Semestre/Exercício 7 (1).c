/*7. Faça um programa em C que leia dois vetores de 12 elementos. Crie um vetor que seja a 
intersecção entre os dois vetores anteriores, ou seja, que contém apenas os números que estão 
em ambos os vetores. Não deve conter números repetidos. */

#include <stdio.h>

int main() {
    int vetor1[12], vetor2[12], vetor3[12], i, j, n=0, duplicado;

    printf("Digite os elementos do primeiro vetor:\n");
    for (i = 0; i < 12; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    printf("\nDigite os elementos do segundo vetor:\n");
    for (i = 0; i < 12; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &vetor2[i]);
    }

    for(i=0;i<12;i++){
        duplicado=0;  
        for(j=0;j<i;j++){
            if(vetor1[i] == vetor1[j]){
                duplicado = 1;
                break;
            }
        }
        if(!duplicado){
            for(j=0;j<12;j++){
                if(vetor1[i] == vetor2[j]){
                    vetor3[n] = vetor1[i];
                    n++;
                    break;
                }
            }
        }
    }

    printf("\nInterseção: ");

    if(n == 0){
        printf("Nenhum número em comum encontrado.");
    } else {
        for(i=0;i<n;i++){
            printf("%d ", vetor3[i]);
        }
    }

    return 0;
}
