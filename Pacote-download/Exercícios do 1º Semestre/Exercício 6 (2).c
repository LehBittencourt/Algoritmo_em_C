/*6 – Codifique, compile e execute um programa na linguagem C que leia 7 números inteiros 
quaisquer no intervalo de [0, 9] e armazene em um vetor. Caso o usuário digite um valor fora do 
intervalo de [0,9] o programa deve insistir até que seja fornecido um valor válido. Em seguida, 
calcule/exiba a quantidade de números 2, 3 e 5 presentes na sequência. 
(utilize a estrutura de decisão switch) */

#include <stdio.h>

int main() {
    int num[7], i, n, cont2=0, cont3=0, cont5=0;

    printf("Digite 7 números inteiros no intervalo de [0, 9]: \n");

    for(i=0;i<7;i++){
        do{
            printf("Número %d: ", i + 1);
            scanf("%d", &n);
            
            if(n<0 || n>9){
                printf("Valor inválido.\nDigite um número no intervalo de [0, 9]: \n");
            }
            
        }while(n<0 || n>9);

        num[i] = n;
    }

    for(i=0;i<7;i++){
        switch(num[i]){
            case 2:
                cont2++;
                break;
            case 3:
                cont3++;
                break;
            case 5:
                cont5++;
                break;
        }
    }

    printf("\nQuantidade de números 2: %d\n", cont2);
    printf("Quantidade de números 3: %d\n", cont3);
    printf("Quantidade de números 5: %d\n", cont5);

    return 0;
}