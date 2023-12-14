/*3 – Leia um vetor de 50 posições e atribua valor 0 para todos os elementos que possuírem valores 
negativos.*/

#include <stdio.h>

int main(){
    int num[50], i;
    
    for(i=0;i<50;i++){
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &num[i]);
        if(num[i]<0){
            num[i]=0;
        }
    }
    
    for(i=0;i<50;i++){
    printf("\nNumero da posicao %d: %d", i, num[i]);
    }
    
    return 0;
}
