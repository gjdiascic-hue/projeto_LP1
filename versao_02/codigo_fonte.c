#include <stdio.h>
#include <string.h>

int main(){
	int opcao = 0, atv_pendentes = 0;
	char nome_atv[50], desc_atv[100];
	int status_atv;
    
    do{
        printf("+--------------------------------------------------------+\n");
        printf("|                    PLANNER DIARIO                      |\n");
        printf("+--------------------------------------------------------+");
        printf("\n\n");
        
        //exibe notificacao quando o sistema eh inicializado, caso haja atividade pendente
        if(atv_pendentes > 0){
            printf("+--------------------------------------------------------+\n");
            printf("|            ATENCAO! Voce tem %d tarefas pendentes       |\n", atv_pendentes);
            printf("+--------------------------------------------------------+");
            printf("\n\n");
        }
         
		printf("Escolha uma opcao: \n\n");
		printf("1. Cadastrar nova atividade.\n");
		printf("2. Acessar lista de atividades.\n");
		printf("3. Sair.\n\n");
		
		 //limpa o buffer do teclado
		if (scanf("%d", &opcao) != 1) {
            while (getchar() != '\n');
            printf("Opcao invalida! Tente novamente.\n\n");
            continue;
        }

		printf("\n");
		
		switch(opcao) {
            case 1:
                printf("+--------------------------------------------------------+\n");
                printf("|                CADASTRO DE ATIVIDADE                   |\n");
                printf("+--------------------------------------------------------+");
                printf("\n\n");
                printf("Nome da atividade: ");
                
                 //limpa o buffer do teclado
                while (getchar() != '\n'); 
                
                fgets(nome_atv, 50, stdin);
                
                int tam_nome = strlen(nome_atv);
                
                //remove o "\n" do final da palavra
                if (tam_nome > 0 && nome_atv[tam_nome - 1] == '\n'){
                    nome_atv[tam_nome - 1] = '\0';
                }
                
                printf("Descricao: ");
                
                while (getchar() != '\n'); 
                
                fgets(desc_atv, 100, stdin);
                
                int tam_desc = strlen(desc_atv);
                
                //remove o "\n" do final da palavra
                if (tam_desc > 0 && desc_atv[tam_desc - 1] == '\n'){
                    desc_atv[tam_desc - 1] = '\0';
                }
                
                status_atv = 0;
                
                printf("\n");
                printf("Atividade cadastrada com sucesso!");
                printf("\n\n");
                break;  
            case 2:
                printf("+--------------------------------------------------------+\n");
                printf("|                 LISTA DE ATIVIDADES                    |\n");
                printf("+--------------------------------------------------------+");
                printf("\n\n");
                printf("Nome: %s\n", nome_atv);
                printf("Descricao: %s\n", desc_atv);
                if(status_atv == 0){
                   printf("Status: A fazer.\n"); 
                }
                if(status_atv == 1){
                   printf("Status: Em andamento.\n"); 
                }
                if(status_atv == 2){
                   printf("Status: Concluido\n."); 
                }
                printf("\n");
                break;   
            case 3:
                do{
                printf("+------------------------------------------------------+\n");
                printf("| Tem certeza que deseja sair? (S/N)                   |\n");
                printf("+------------------------------------------------------+\n");
                printf(" Resposta: ");
                
                char confirmar;
                scanf(" %c", &confirmar);
                
                if(confirmar == 'S' || confirmar == 's'){
                    printf("\nSaindo do sistema... Suas alteracoes foram salvas!\n\n");
                    opcao = 3;
                    break;
                }else if (confirmar == 'N' || confirmar == 'n') {
                    printf("\nRetornando ao menu principal...\n\n");
                    opcao = 0;
                    break;
                }else{
                    printf("\nOpcao invalida! Digite apenas 's' para sim ou 'n' para nao.\n\n");
                }
                
                }while(1);
                    break;
            default:
                printf("Opcao invalida! Tente novamente.\n\n");
                break;
        }
			
	}while(opcao != 3);
	
	return 0;
}
