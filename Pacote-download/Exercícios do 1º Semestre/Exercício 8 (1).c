/* 8. Desenvolva um programa em C para ler 8 números inteiros DIFERENTES a serem 
armazenados em um vetor. Os dados deverão ser armazenados no vetor na ordem que forem 
sendo lidos, sendo que caso o usuário digite um número que já foi digitado anteriormente, o 
programa deverá pedir para ele digitar outro número. 
Note que a cada valor digitado pelo usuário deve ser pesquisado no vetor, verificando se ele existe 
entre os números que já foram digitados. Exibir na tela o vetor final que foi digitado.*/

#include <stdio.h>

int main() {
    int vetor[8], i, j, n, repetido;

    printf("Digite 8 números diferentes:\n");

    for(i=0;i<8;i++){
        do {
            printf("Digite o %dº número: ", i + 1);
            scanf("%d", &n);
            repetido = 0;
            for(j=0;j<i;j++){
                if(vetor[j] == n){
                    repetido=1;
                    break;
                }
            }
            if(repetido){
                printf("Número já digitado. Digite outro número.\n");
            }
        }while(repetido);
        vetor[i] = n;
    }

    printf("\nO vetor final digitado é:");

    for(i=0;i<8;i++){
        printf(" %d", vetor[i]);
    }

    printf("\n");

    return 0;
}
