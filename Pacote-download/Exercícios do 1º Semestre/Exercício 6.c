#include <stdio.h>

int main()
{
    float altura, altura_d, altura_f;
    
    printf("Digite em cm a altura do degrau: ");
    scanf("%f", &altura_d);
    
    printf("Digite em cm a altura que deseja alcancar: ");
    scanf ("%f", &altura);
    
    altura_f = altura-altura_d;
    
    printf("Voce devera subir: %f ", altura_f);
    
    return 0;
}
