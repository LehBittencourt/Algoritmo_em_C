/* 4. Reescreva novamente o programa da questão 2 para que seja exibido a quantidade 
de vogais e a quantidade de consoantes da palavra “batatinha”.*/

#include <stdio.h>
#include <string.h>

int main(){
    char palavra[10] = {"batatinha"}, vogais[5] = {'a','e','i','o','u'};
    int i,j, tam1=0, tam2=0;
    
    //Mensagem para o usuario saber o que esta sendo impresso
    printf("As vogais de batatinha sao: ");
    
    //Impresssao das vogais
    for(i=0;i<10;i++){
        for(j=0;j<5;j++){
            if(palavra[i] == vogais[j]){
                printf(" %c", vogais[j]);
                tam1++;
            }
        }
    }
    
    //Mensagem para o usuario saber o que esta sendo impresso
    printf("\nAs consoantes de batatinha sao: ");
    
    //Impresssao das consoantes
    for(i=0;i<10;i++){
        int vogal =0;
            for(j=0;j<5;j++){
                if(palavra[i] == vogais[j]){
                    vogal++;
                    break;
                }
            }if(!vogal){
                printf("%c", palavra[i]);
                tam2++;
            }
    }
    
    //Imprimindo a quantidade de vogais e consoantes
    printf("\nQuantidade de vogaiss da palavra batatinha: %d", tam1);
    printf("\nQuantidade de consoantes da palavra batatinha: %d", tam2-1);
    
    

    return 0;
}
