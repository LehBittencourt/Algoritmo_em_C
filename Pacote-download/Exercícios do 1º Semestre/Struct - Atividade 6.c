/* 6. Defina as estruturas cuja representação gráfica é dada a seguir: 
a- crie um vetor com 7 elementos Cadastro. 
b- permita ao usuário entrar com dados para preencher esse 7 cadastros. 
c- encontre a pessoa com maior idade entre os cadastrados 
d- encontre as pessoas do sexo masculino 
e- encontre as pessoas com salário maior que 1000 
f- imprima os dados da pessoa cuja identidade seja igual à um valor fornecido pelo usuário*/

#include <stdio.h>

struct Endereco{
    char rua[50]; 
    char estado[15];
    char bairro[50];
    int cep;
    char cidade[50];
};

struct Cadastro{
    char nome[50];
    int identidade;
    int telefone;
    struct Endereco end;
    int cpf;
    int idade;
    float salario;
    char estado_civil[10];
    char sexo[10];
    
};

int main(){
    struct Cadastro pessoa[7];
    int i, maior=0, cont=0, busca;
    
    //Declarando variaveis
    for(i=0;i<7;i++){
        printf("Dados da %d pessoa\n", i+1);
        printf("Digite o nome:");
        scanf("%s", pessoa[i].nome);
        printf("Digite a identidade: ");
        scanf("%d", &pessoa[i].identidade);
        printf("Digite o telefone: ");
        scanf("%d", &pessoa[i].telefone);
            //Declarando Endereco
            printf("Endereco\n");
            printf("Digite o nome da rua: ");
            scanf("%s", pessoa[i].end.rua);
            printf("Digite o estado: ");
            scanf("%s", pessoa[i].end.estado);
            printf("Digite o bairro: ");
            scanf("%s", pessoa[i].end.bairro);
            printf("Digite o cep: ");
            scanf("%d", &pessoa[i].end.cep);
            printf("Digite a cidade: ");
            scanf("%s", pessoa[i].end.cidade);
        printf("Digite o cpf: ");
        scanf("%d", &pessoa[i].cpf);
        printf("Digite a idade: ");
        scanf("%d", &pessoa[i].idade);
        printf("Digite o salario: ");
        scanf("%f", &pessoa[i].salario);
        printf("Digite o estado civil: ");
        scanf("%s", pessoa[i].estado_civil);
        printf("Digite o sexo: ");
        scanf("%s", pessoa[i].sexo);
    }
    
    //Verificando qual e a maior idade
    for(i=0;i<7;i++){
        if(pessoa[i].idade > maior){
            maior = pessoa[i].idade;    
        }
        
    }
    
    //Impressao da maior idade
    printf("A maior idade e: %d\n", maior);
    
    //Verificando quantas pessoas sao do sexo masculino
    for(i=0;i<7;i++){
            if (strcmp(pessoa[i].sexo, "masculino") == 0) {
                cont++;
            }
        }
    
    //Impressao da quantidade de homens
    printf("Quantidade de pessoas do sexo masculino: %d\n", cont);
    
    //Verificando quantas pessoas tem salário maior que 1000 
    printf("Pessoas com salario maior que 1000: ");
    for(i=0;i<7;i++){
        if(pessoa[i].salario > 1000){
            printf("%s ", pessoa[i].nome);
        }
    }
    
    //Identidade fornecida pelo usuario
    printf("Digite o numero da identidade: ");
    scanf("%d", &busca);
    
    //Busca da identidade fornecida
    for(i=0;i<7;i++){
        if(busca == pessoa[i].identidade){
            printf("\nNome: %s", pessoa[i].nome);
            printf("\nidentidade: %.7d", pessoa[i].identidade);
            printf("\nTelefone: %.9d", pessoa[i].telefone);
            printf("\nEndereco: rua %s, estado %s, bairro: %s, cidade %s. Cep: %.8d.", pessoa[i].end.rua, pessoa[i].end.estado, pessoa[i].end.bairro, pessoa[i].end.cidade, pessoa[i].end.cep);
            printf("\nCPF: %.11d", pessoa[i].cpf);
            printf("\nIdade: %.2d", pessoa[i].idade);
            printf("\nSalario: %.2f", pessoa[i].salario);
            printf("\nEstado Civil: %s", pessoa[i].estado_civil);
            printf("\nSexo: %s", pessoa[i].sexo);
        }
    }

    return 0;
}
