/* 3. Faça uma função que receba por parâmetro dois valores X e Z. Calcule e retorne o resultado 
de XZ para o programa principal. 
Atenção, não utilize nenhuma função pronta de exponenciação*/

#include <stdio.h>

int exponenciacao(int x, int y){
    int i, resultado = 1;

    for(i=0;i<y;i++){
        resultado*= x;
    }
    
    return resultado;   
}

int main(){
    int x, y, resultado=1;
    
    //Declarando variaveis
    printf("Digite o numero da base: ");
    scanf("%d", &x);
    printf("Digite o numero do expoente: ");
    scanf("%d", &y);
    
    //Resultado recebe funcao
    resultado = exponenciacao(x,y);
    
    //Imprimindo o resultado
    printf("%d^%d = %d", x, y ,resultado);
    
    return 0;
}
