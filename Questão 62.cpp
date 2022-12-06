#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Calcular a média aritmética da turma.");
	printf("\n\n");
	
	int num_alunos, cont;
	float nota, media, ajun_notas=0;
	
	printf("Digite o número de alunos: ");
	scanf("%d", &num_alunos);
	printf("\n\n");
	
	for(cont=1; cont<=num_alunos; cont++){
		
		printf("Digite a nota do aluno(a): ");
		scanf("%f", &nota);
		
		ajun_notas += nota;
	}
	
	media = ajun_notas/num_alunos;
	
	printf("\n\n");
	printf("A média aritmética da turma é: %.2f\n", media);
	
	return 0;
}
