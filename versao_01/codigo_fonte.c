#include <stdio.h>

int main(){
	int opcao;
	
	//rascunho
	printf(" ====================\n");
	printf("|      AGENDA        |\n");
	printf(" ====================\n");
	printf("\n");
	
	//usuario acessa o sistema e um menu eh exibido, ele escolhe cadastrar uma nova atividade o acessar a lista de atividades
	do{
		printf("Escolha uma opcao: \n\n");
		printf("1. Cadastrar nova atividade.\n");
		printf("2. Acessar lista de atividades.\n");
		printf("3. Sair.\n\n");
		scanf("%d", opcao);
		
		switch(opcao){
			case 0:
			printf("Cadastrar nova atividade.");
			break;
			case 1:
			printf("Sair");
			break;
		}
			
	}while(opcao != 0);
	
	return 0;
}
