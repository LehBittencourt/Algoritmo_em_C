/*9 ‐ Escreva um programa que funciona como o jogo da forca. Ousuário tenta acertar 
uma palavra (contida numa variável) usando 5tentativas. A palavra é mostrada ao usuário 
com as letras marcadas com o símbolo '*'. O usuário deve digitar uma letra (sem acentos, 
til, trema) e caso a letra esteja correta, o símbolo '*' é substituído pelaletra. Se o 
usuário não montar a palavra até a quinta tentativa, o jogo acaba em derrota*/

#include <stdio.h>
#include <string.h>

void forca(int erro) {
    if (erro == 0) {
        printf("-------------|\n");
        printf("|          |\n");
        printf("|\n");
        printf("|\n");
        printf("|\n");
        printf("|\n");
        printf("|\n");
        printf("|\n");
        printf("--\n");

    } else if (erro == 1) {
        printf("-------------|\n");
        printf("|          |\n");
        printf("|          O\n");
        printf("|\n");
        printf("|\n");
        printf("|\n");
        printf("|\n");
        printf("|\n");
        printf("--\n");
    } else if (erro == 2) {
        printf("-------------|\n");
        printf("|          |\n");
        printf("|          O\n");
        printf("|          |\n");
        printf("|\n");
        printf("|\n");
        printf("|\n");
        printf("|\n");
        printf("--\n");
    } else if (erro == 3) {
        printf("-------------|\n");
        printf("|          |\n");
        printf("|          O\n");
        printf("|         /|\n");
        printf("|\n");
        printf("|\n");
        printf("|\n");
        printf("|\n");
        printf("--\n");
    } else if (erro == 4) {
        printf("-------------|\n");
        printf("|          |\n");
        printf("|          O\n");
        printf("|         /|\\\n");
        printf("|\n");
        printf("|\n");
        printf("|\n");
        printf("|\n");
        printf("--\n");
    } else if (erro == 5) {
        printf("-------------|\n");
        printf("|          |\n");
        printf("|          O\n");
        printf("|         /|\\\n");
        printf("|          |\n");
        printf("|\n");
        printf("|\n");
        printf("| Game Over\n");
        printf("--\n");
    }
}

int main() {
    char palavra[50], copia[50], letra;
    int erros = 0, tam = 0, i, erro = 1;

    // Declarando a palavra do jogo
    printf("Digite a palavra: ");
    scanf("%s", palavra);

    // Declarando o tamanho da palavra
    tam = strlen(palavra);
    printf("A palavra tem: %d letras\n", tam);

    // Imprimindo linhas para o jogador não ver a palavra
    for (i = 0; i < 30; i++) {
        printf("\n");
    }

    // Copia recebe palavra 1
    strcpy(copia, palavra);

    // Substituindo copia por *
    for (i = 0; i < tam; i++) {
        copia[i] = '*';
    }

    // Começando o jogo
    while (1) {
        forca(erros);
        printf("Palavra: ");
        for (i = 0; i < tam; i++) {
            printf("%c ", copia[i]);
        }

        printf("\nDigite uma letra: ");
        scanf(" %c", &letra);

        erro = 1;
        for (i = 0; i < tam; i++) {
            if (letra == palavra[i]) {
                copia[i] = letra;
                erro = 0;
            }
        }

        if (erro == 1) {
            erros++;
        }

        if (strcmp(copia, palavra) == 0) {
            printf("\nVocê Venceu\n");
            break;
        }

        if (erros == 5) {
            forca(erros);
            break;
        }
    }

    return 0;
}