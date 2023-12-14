/* 7. Codifique um programa que recebe uma String e substitui cada letra
pela terceira letra seguinte circularmente (A é substituído por D, … e Z é
substituído por C).*/

#include <stdio.h>
#include <string.h>

int main(){
    char palavra[50];
    int i, tam=0;
    
    //Declarando a palavra
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    
    //Declarando tamanho da string
    tam = strlen(palavra);
    
    //Possibilidades para subistituicao das letras
    for(i=0;i<tam;i++){
        if(palavra[i]>='A' && palavra[i]<='Z'){
            if(palavra[i]>='A' && palavra[i]<='X'){
                palavra[i]+= 3;
            } else {
                palavra[i]-= 23;
            }
        } else if(palavra[i]>='a' && palavra[i]<='z'){
            if(palavra[i]>='a' && palavra[i]<='x'){
                palavra[i] += 3;
            } else {
                palavra[i] -= 23;
            }
        }
    }

    printf("Palavra criptografada: %s", palavra);

    return 0;
}


