#include <stdio.h>
#include <locale.h>

int main()
{
    int n1, n2, n3;
    
    setlocale(LC_ALL, "Portuguese");
    
    printf("Digite primeiro número: ");
    scanf("%d", &n1);
    
    printf("Digite segundo número: ");
    scanf("%d", &n2);
    
    printf("Digite terceiro número: ");
    scanf("%d", &n3);
    
    if (n1>n2 && n2>n3){
        printf("A ordem crescente dos números e: %d, %d, %d", n1, n2, n3);
    }
    else
    {
        if (n2>n3 && n3>n1){
        printf("A ordem crescente dos números e: %d, %d, %d", n1, n2, n3);
        }
        else
        { 
            if (n3>n2 && n2>n1){
              printf("A ordem crescente dos números e: %d, %d, %d", n1, n2, n3);
            }
            else
            {
                printf("A ordem crescente dos números e: %d, %d, %d", n1, n2, n3);
            }
            
        }
        
        
        
    }

    
    return 0;
}
