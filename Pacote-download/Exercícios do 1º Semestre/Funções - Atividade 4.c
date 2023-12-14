/*4 – Codifique, compile e execute um programa que contenha uma função que receba como 
parâmetro um valor inteiro e gere como saída n linhas com pontos de exclamação, conforme o 
exemplo abaixo (para n = 5): 
! 
!! 
!!! 
!!!! 
!!!!!*/

#include <stdio.h>
 
void exclamacao(int n){
    int i, j;
    
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
        printf("!");
        }
        printf("\n");
    }
}

int main(){
    int n;
    
    //Declarando a variavel n
    printf("Digite o valor desejado: ");
    scanf("%d", &n);
    
    //Imprimindo a funcao
    exclamacao(n);

    return 0;
}
