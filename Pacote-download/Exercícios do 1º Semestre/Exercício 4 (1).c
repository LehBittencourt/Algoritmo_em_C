#include <stdio.h>
#include <locale.h>

int main()
{
    int n1, n2;
    
    setlocale(LC_ALL, "Portuguese");
    
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &n2);
    
    if (n1>n2){
        printf("O número maior é: %d", n1);
        
    }
    else{
        if(n2>n1){
        printf("O número maior é: %d", n2);
        }
        else{
        printf("Os números são iguais");
        }
    }
    
    return 0;
}
