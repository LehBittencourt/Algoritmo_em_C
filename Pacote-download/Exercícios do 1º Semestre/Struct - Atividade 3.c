/*3. Codifique, compile e execute um programa em C que crie uma estrutura Pessoa com os seguintes 
campos: nome, sexo, peso, data de nascimento e endereço. Em seguida defina uma variável do tipo da 
estrutura Pessoa e leia os valores para cada um dos seus campos. Ao final, imprima os valores armazenados 
em cada campo da estrutura na tela. 
Obsimp: Crie uma nova estrutura para Data e utilize a estrutura Endereço implementada no exercício 
anterior (Questão 2)*/

#include <stdio.h>

struct Data{
  int dia;
  int mes;
  int ano;
};

struct Endereco{
  char rua[50];
  int num;
  char cidade[50];
  char estado[50];
  int cep;
};

struct Pessoa{
    char nome[50];
    char sexo[50];
    float peso;
    struct Data d;
    struct Endereco e;
};

int main() {
    struct Data d;
    struct Endereco e;
    struct Pessoa p;
    
    
    //Declarando dados da pessoa
    printf("Digite o nome: ");
    scanf("%s", p.nome);
    printf("Digite sexo: ");
    scanf("%s", p.sexo);
    printf("Digite o peso: ");
    scanf("%f", &p.peso);
    
    //Declarando a data 
    printf("\nDigite o dia do nascimento: ");
    scanf("%d", &p.d.dia);
    printf("Digite o mes do nascimento: ");
    scanf("%d", &p.d.mes);
    printf("Digite o ano do nascimento: ");
    scanf("%d", &p.d.ano);
    
    //Declarando Endereco
    printf("\nDigite o nome da rua: ");
    scanf("%s", p.e.rua);
    printf("Digite o numero: ");
    scanf("%d", &p.e.num);
    printf("Digite a cidade: ");
    scanf("%s", p.e.cidade);
    printf("Digite o estado: ");
    scanf("%s", p.e.estado);
    printf("Digite o cep: ");
    scanf("%d", &p.e.cep);
    
    //Imprimindo dados Pessoa
    printf("\nNome: %s", p.nome);
    printf("\nSexo: %s", p.sexo);
    printf("\nPeso: %.2f", p.peso);
    
    //Imprimindo data de nascimento
    printf("\nData de nascimento: %.2d/%.2d/%.4d", p.d.dia, p.d.mes, p.d.ano);
    
    //Imprimindo o Endereco
    printf("\nEndereco: rua %s, numero %d, %s, %s, cep: %.8d.", p.e.rua, p.e.num, p.e.cidade, p.e.estado, p.e.cep);
    
  return 0;
}