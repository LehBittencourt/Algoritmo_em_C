#include <stdio.h>
#include <locale.h>

int main()
{
    int cod;
    float preco;
    
    setlocale(LC_ALL, "Portuguese");
    
    printf("Digite o preço do produto: ");
    scanf("%f", &preco);
    
    printf("Digite um número de 1 a 8 que será o código do produto: ");
    scanf("%d", &cod);
    
    switch(cod){
        
        case 1:
        printf("Preço R$ %.2f do produto - Sul", preco);
        break;
        
        case 2:
        printf("Preço R$ %.2f do produto - Norte", preco);
        break;
        
        case 3:
        printf("Preço R$ %.2f do produto - Leste", preco);
        break;
        
        case 4:
        printf("Preço R$ %.2f do produto - Oeste", preco);
        break;
        
        case 5:
        printf("Preço R$ %.2f do produto - Nordeste", preco);
        break;
        
        case 6:
        printf("Preço R$ %.2f do produto - Sudeste", preco);
        break;
        
        case 7:
        printf("Preço R$ %.2f do produto - Centro Oeste", preco);
        break;
        
        case 8:
        printf("Preço R$ %.2f do produto - Centro Sul", preco);
        break;
        
        default:
            printf("Produto importado");
    }
    

    return 0;
}
