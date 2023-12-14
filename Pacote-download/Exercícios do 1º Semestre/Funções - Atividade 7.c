/* 7. Crie uma função que recebe um número como parâmetro e retorne o fatorial do número digitado*/

#include <stdio.h>

int fatorial(int n){
    int i, fatorial = 1;
    
    for(i =1;i<=n;i++){
        fatorial*= i;
    }
    
    return fatorial;
}

int main(){
    int n, resultado;
    
    //Declarando a variavel
    printf("Digite um numero: ");
    scanf("%d", &n);
 
    //Resultado recebe a funcao fatorial   
    resultado = fatorial(n);
    
    //Imprimindo o resultado
    printf("\nO fatorial de %d e: %d", n, resultado);

    return 0;
}