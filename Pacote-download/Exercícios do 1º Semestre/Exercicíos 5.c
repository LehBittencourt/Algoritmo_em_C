#include <stdio.h>

int main()
{
    int ano_nasc, ano_atual, idade, anos_2020;
    
    printf("Digite o seu ano de nascimento: ");
    scanf("%d", &ano_nasc);
    
    printf ("Digite o ano atual: ");
    scanf("%d", &ano_atual);
    
    idade = ano_atual-ano_nasc;
    
    anos_2020 = 2020-ano_nasc;
    
    printf ("Sua idade e: %d \n", idade);
    printf ("Sua idade em 2020 e: %d", anos_2020);

    return 0;
}
