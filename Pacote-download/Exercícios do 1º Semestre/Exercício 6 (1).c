#include <stdio.h>
#include <locale.h>

int main()
{
    int n1;
    
    setlocale(LC_ALL, "Portuguese");
    
    printf("Digite um número: ");
    scanf("%d", &n1);
    
    if( n1 %2 == 0)
    {
        printf("%d e par", n1);
    }
        else{
            printf("%d e ímpar", n1);
        }


    return 0;
}
