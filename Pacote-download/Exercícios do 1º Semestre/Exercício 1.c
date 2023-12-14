#include <stdio.h>

int main()
{
    
    float nota1, nota2, nota3, peso1, peso2, peso3, mediap;
    
    printf("Digite sua nota1: ");
    scanf("%f", &nota1);
    
    printf ("Digite sua nota2: ");
    scanf("%f", &nota2);
    
    printf ("Digite sua nota3: ");
    scanf("%f", &nota3);
    
    printf("Digite sua peso1: ");
    scanf("%f", &peso1);
    
    printf("Digite sua peso2: ");
    scanf("%f", &peso2);
    
    printf("Digite sua peso3: ");
    scanf("%f", &peso3);
    
    mediap = ((nota1*peso1)+(nota2*peso2)+(nota3*peso3))/(peso1+peso2+peso3);

    printf("Sua media ponderada e: %f", mediap);
    
    return 0;
}
