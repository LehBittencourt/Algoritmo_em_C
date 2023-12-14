/* 2. Codifique, compile e execute um programa na linguagem C que armazene todas as letras da palavra
“batatinha”. Em seguida, imprima apenas as vogais.*/

#include <stdio.h>
#include <string.h>

int main(){
    char palavra[10] = {"batatinha"}, vogais[5] = {'a','e','i','o','u'};
    int i,j;
    
    //Mensagem para o usuario saber o que esta sendo impresso
    printf("As vogais de batatinha sao: ");
    
    //Impresssao das vogais
    for(i=0;i<10;i++){
        for(j=0;j<5;j++){
            if(palavra[i] == vogais[j]){
                printf(" %c", vogais[j]);
            }
        }
    }
    
    return 0;
}