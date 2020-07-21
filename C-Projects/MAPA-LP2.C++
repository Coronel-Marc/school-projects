#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct contatos{
	int codigo;
	char nome[30], telefone[15], email[50];
};

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int escolha, contador = 0, i;
	struct contatos cliente[5];
	
	
	printf(" Bem-vindo a sua agenda pessoal.\n\n");
	
	do{
		printf(" Por favor, escolha uma opção\n\n");
		printf(" Novo Cadastro[1]\n Cadastrados[2]\n Encerrar[3]\n ");
		scanf("%d", &escolha);
		fflush(stdin);
		system("cls");
		
	
		switch(escolha){
			
			case 1:
			
				if(contador <= 4 ){
					printf(" CADASTRAR NOVO CLIENTE\n\n");
					printf(" Código: %d\n", contador);
					printf(" Nome: ");
					fgets(cliente[contador].nome, 30, stdin);
					fflush(stdin);
					
					printf(" Telefone: ");
					fgets(cliente[contador].telefone, 15, stdin);
					fflush(stdin);
					
					printf(" Endereço de e-mail: ");
					fgets(cliente[contador].email, 50, stdin);
					fflush(stdin);
					
					contador++;
		
					system("pause");
					system("cls");	
				} else {
					printf("Agenda lotada!\n\n");
					
					system("pause");
					system("cls");
				}
				break;
			case 2:
				if(contador == 0){
					printf("Agenda Vazia...\n\n");
					
					system("pause");
					system("cls");
					
				} else {
					printf(" LISTA DE CLIENTES\n\n\n");
					
					
					for(i=0; i<contador; i++){
						printf(" Código: %d\n", i);
						printf(" Nome: %s", cliente[i].nome);
						printf(" Telefone: %s", cliente[i].telefone);
						printf(" E-mail: %s\n\n", cliente[i].email);
						
						
					}
					
					system("pause");
					system("cls");
					
				}
				
				break;
			case 3:
				printf("ENCERRANDO...\n");
				
				break;
			default: printf(" Digite um valor válido para escolher uma opção.\n (Erro: opção inválida)\n\n");
			system("pause");
			system("cls");
				break;
	}
		
	} while(escolha !=3);
	
	
	
	return(0);
}