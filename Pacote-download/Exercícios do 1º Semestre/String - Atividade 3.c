/* 3. Codifique, compile e execute um programa na linguagem C que armazene todas as letras da palavra
“batatinha”. Em seguida, imprima apenas as consoantes.*/

#include <stdio.h>
#include <string.h>

int main(){
    char palavra[10] = {"batatinha"}, vogais[5] = {'a','e','i','o','u'};
    int i,j;
    
    //Mensagem para o usuario saber o que esta sendo impresso
    printf("As consoantes de batatinha sao: ");
    
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
                }
    }
    
    return 0;
}