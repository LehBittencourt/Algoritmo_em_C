#include <stdio.h>
#include <locale.h>

int main()
{
    int resp;
        
    setlocale(LC_ALL, "Portuguese");
        
    printf("Digite a primeira letra do seu estado civil: ");
    scanf("%c", &resp);
    
    switch(resp)
    {
        case 'C':
            case 'c':
            printf("Casado");
            break;
        
        case 'S':
            case 's': 
            printf("Solteiro");
            break;
            
        case 'V':
            case 'v':
            printf("Viúvo");
            break;
            
        case 'D':
            case 'd':
            printf("Divorciado");
            break;
        
        case 'Q':
            case 'q':
            printf("Desquitado");
            break;
        
        default:
            printf("Letra inválida");
        
    }
    
    return 0;
}
