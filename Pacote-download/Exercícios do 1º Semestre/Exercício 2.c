#include <stdio.h>

int main()
{
    float salario, salariof;
    
    printf("Digite seu salario: ");
    scanf ("%f", &salario);
    
    salariof = salario*1.25;
    
    printf ("Seu novo salario: %f", salariof);

    return 0;
}
