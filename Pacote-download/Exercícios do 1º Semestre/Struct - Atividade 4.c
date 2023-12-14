/*4. Codifique, compile e execute um programa em C que realize o cadastro de computadores de uma 
empresa com as seguintes informações: marca, ano de fabricação e peso. Faça o cadastramento de 3 
computadores. Em seguida, imprima as informações de cada computador na tela.*/

#include <stdio.h>

struct computador{
  char marca[50];
  int ano;
  float peso;
};

int main(){
    struct computador pc1;
    struct computador pc2;
    struct computador pc3;
    
    //Declarando pc1
    printf("Dados do computador 1.");
    printf("\nDigite a marca: ");
    scanf("%s", pc1.marca);
    printf("Digite o ano de fabricacao: ");
    scanf("%d", &pc1.ano);
    printf("Digite o peso: ");
    scanf("%f", &pc1.peso);
    
    //Declarando pc2
    printf("\nDados do computador 2.");
    printf("\nDigite a marca: ");
    scanf("%s", pc2.marca);
    printf("Digite o ano de fabricacao: ");
    scanf("%d", &pc2.ano);
    printf("Digite o peso: ");
    scanf("%f", &pc2.peso);
    
    //Declarando pc3
    printf("\nDados do computador 3.");
    printf("\nDigite a marca: ");
    scanf("%s", pc3.marca);
    printf("Digite o ano de fabricacao: ");
    scanf("%d", &pc3.ano);
    printf("Digite o peso: ");
    scanf("%f", &pc3.peso);
    
    //Imprimindo dados dos computadoes
    printf("\nDados do computador 1.\nMarca: %s\nAno de fabricacao: %.4d\nPeso: %.2f", pc1.marca, pc1.ano, pc1.peso);
    printf("\n\nDados do computador 2.\nMarca: %s\nAno de fabricacao: %.4d\nPeso: %.2f", pc2.marca, pc2.ano, pc2.peso);
    printf("\n\nDados do computador 3.\nMarca: %s\nAno de fabricacao: %.4d\nPeso: %.2f", pc3.marca, pc3.ano, pc3.peso);
    
    return 0;
}





