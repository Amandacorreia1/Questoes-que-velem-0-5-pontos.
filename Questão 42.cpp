#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int nasc, ano_trab, ano_atual;
	
	printf("Informe o ano de nascimento: ");
	scanf("%d", &nasc);
	
	printf("Informe o ano de ingresso na empresa: ");
	scanf("%d", &ano_trab);
	
	printf("Informe o ano atual: ");
	scanf("%d", &ano_atual);
	
	nasc = ano_atual - nasc;
	ano_trab = ano_atual - ano_trab;
	
	if(nasc>=65 && ano_trab>=30 || nasc>=60 && ano_trab>=25){
		printf("\nSua idade é: %d Anos.\n\n", nasc);
		printf("O tempo de trabalho é: %d Anos.\n\n", ano_trab);
		printf("Requerer aposentadoria\n");
	}else{
		printf("\nSua idade é: %d Anos.\n\n", nasc);
		printf("O tempo de trabalho é: %d Anos.\n\n", ano_trab);
		printf("Não requer\n");
		
	}

	
	return 0;
}
