
#include <stdio.h>

int main()
{
    float hora, hora_m, minutos, minutos_resultado;
    
    printf("Digite a hora: ");
    scanf("%f", &hora);
    
    printf("Digite os minutos: ");
    scanf("%f", &minutos);
    
    hora_m = hora*60;
    
    minutos_resultado = hora_m+minutos;
    
    printf("O resultado e: %f", minutos_resultado);

    return 0;
}
