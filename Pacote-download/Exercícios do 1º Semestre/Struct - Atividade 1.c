/*1. Codifique, compile e execute um programa em C que crie uma estrutura Hora com os seguintes campos: 
hora, minuto e segundo. Em seguida defina uma variavel do tipo da estrutura Hora e leia os valores para 
cada campo da estrutura na tela.*/ 

#include <stdio.h>

struct Hora {
    int hora;
    int min;
    int seg;
};

int main() {
    struct Hora tempo;
    
    printf("Digite um horario valido.\n");
    
    //Declarando os valores do struct colocado dentro do while para verificar se o horario e valido
    do{
        printf("Digite a hora: ");
        scanf("%d", &tempo.hora);
        printf("Digite os minutos: ");
        scanf("%d", &tempo.min);
        printf("Digite os segundos: ");
        scanf("%d", &tempo.seg);
    } while(tempo.hora<0 || tempo.hora>23 || tempo.min<0 || tempo.min>59 || tempo.seg<0 || tempo.seg>59);
    
    //Imprimindo os valores do struct
    printf("Horario: %.2d:%.2d:%.2d", tempo.hora, tempo.min, tempo.seg);
    
    return 0;
}