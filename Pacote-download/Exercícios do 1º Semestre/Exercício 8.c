#include <studio.h>

int main(){

    float altura, peso;
    
    printf("Digite a altura da pessoa: ");
    scanf("%f", &altura);

	printf("Digite o peso da pessoa: ");
	scanf("%f", &peso);

    if(altura > 0 && altura < 1.20 && peso > 0 && peso < 60){
		printf("Classificacao A");
	}else if(altura > 0 && altura < 1.20 && peso >= 60 && peso <= 90){
		printf("Classificacao D");
	}else if(altura > 0 && altura < 1.20 && peso > 90){
		printf("Classificacao G");
	}else if(altura >= 1.20 && altura < 1.70 && peso > 0 && peso < 60){
		printf("Classificacao B");
	}else if(altura >= 1.20 && altura < 1.70 && peso >= 60 && peso <= 90){
		printf("Classificacao E");
	}else if(altura >= 1.20 && altura < 1.70 && peso > 90){
		printf("Classificacao H");
	}else if(altura > 1.70 && peso > 0 && peso < 60){
		printf("Classificacao C");
	}else if(altura > 1.70 && peso >= 60 && peso <= 90){
		printf("Classificacao F");
	}else if(altura > 1.70 && peso > 90){
		printf("Classificacao I");
	}else{
		printf("altura ou peso não sao validos");
	}

	return 0;
    
}