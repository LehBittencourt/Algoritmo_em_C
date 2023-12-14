#include <stdio.h>

int main()
{
    
        float salariob, gratificacao, imposto;
        
    printf("Digite seu salario: ");
    scanf ("%f", &salariob);
    
    gratificacao = salariob*0.05;

    printf ("Sua gratificacao sobre o salario-base: %f \n", gratificacao);
    
    imposto = salariob*0.07;
    
    printf ("Impossto sobre o salario-base: %f", imposto);

    
    return 0;
}
