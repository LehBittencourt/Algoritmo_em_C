/*5. Codifique, compile e execute um programa em C que crie uma estrutura representando os alunos do 
curso de Programação. A estrutura deve conter a matrícula do aluno, nome, nota da primeira prova, nota da 
segunda prova e nota da terceira prova. O programa deve executar as seguintes ações: 
a- permitir ao usuário entrar com os dados de 5 alunos 
b- encontrar o aluno com maior nota da primeira prova 
c- encontrar o aluno com maior média geral 
d- encontrar o aluno com menor média geral 
e- para cada aluno armazenado na estrutura diga se ele foi aprovado ou reprovado, considerando o valor 7 
para aprovação. */

#include <stdio.h>
#include <string.h>

struct Aluno {
    int matricula;
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
};

int main() {
    struct Aluno alunos[5];
    int i, resultado[5];
    float maior_nota = -1, media[5], maior_media = -1, menor_media = -1;

    // Declarando os dados dos alunos
    for(i = 0; i < 5; i++) {
        printf("Digite a matricula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", alunos[i].nome);
        printf("Digite a primeira nota do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota1);
        printf("Digite a segunda nota do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota2);
        printf("Digite a terceira nota do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota3);
    }

    // Aluno com a maior nota da prova 1
    for(i = 0; i < 5; i++) {
        if(alunos[i].nota1 >= maior_nota) {
            maior_nota = alunos[i].nota1;
        }
    }

    // Média geral
    for(i = 0; i < 5; i++) {
        media[i] = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
    }

    // Maior e menor média geral
    for(i = 0; i < 5; i++) {
        if(media[i] > maior_media) {
            maior_media = media[i];
        }
        if(media[i] < menor_media || menor_media == -1) {
            menor_media = media[i];
        }
    }
 
    // Declarando se o aluno foi aprovado ou reprovado
    for(i = 0; i < 5; i++) {
        if(media[i] >= 7) {
            resultado[i] = 0; 
        } else {
            resultado[i] = 1;
        }
    }

    // Imprimindo os resultados
    printf("A maior nota da prova 1: %.2f\n", maior_nota);
    printf("Aluno com a maior media geral: %.2f\n", maior_media);
    printf("Aluno com a menor media geral: %.2f\n", menor_media);
    for(i = 0; i < 5; i++) {
        if(resultado[i] == 0) {
            printf("Aluno Aprovado.\n");
        } else {
            printf("Aluno Reprovado.\n");
        }
    }

    return 0;
}