/*2 – Codifique, compile e execute um programa em C que crie uma estrutura Endereço com os seguintes 
campos: nome da rua, número, cidade, estado e cep. Em seguida defina uma variável do tipo da estrutura 
Endereço e leia os valores para cada um dos seus campos. Ao final, imprima os valores armazenados em 
cada campo da estrutura na tela.*/

#include <stdio.h>

struct Endereco{
  char rua[50];
  int num;
  char cidade[50];
  char estado[50];
  int cep;
};

int main() {
    struct Endereco end;
    
    //Declarando as variaveis do struct
    printf("Digite o nome da rua: ");
    scanf("%s", end.rua);
    printf("Digite o numero: ");
    scanf("%d", &end.num);
    printf("Digite o nome da cidade: ");
    scanf("%s", end.cidade);
    printf("Digite o estado: ");
    scanf("%s", end.estado);
    printf("Digite o cep: ");
    scanf("%d", &end.cep);
    
    //Imprimindo as variaveis do struct
    printf("\n\nNome da rua: %s\nNumero: %d\nCidade: %s\nEstado: %s\nCep: %.8d", end.rua, end.num, end.cidade, end.estado, end.cep);
    
  return 0;
}