#include <stdio.h>       										// Biblioteca de comunicação com o usuário
#include <stdlib.h>      										// Biblioteca de alocação de espaço em memória
#include <locale.h>      										// Biblioteca de alocações de texto por região

int main()
{
	
	int opcao = 0;												// Definindo variáveis
	int laco = 1;
	
	for ( laco = 1 ; laco = 1 ;)
	{
	
		system ("cls");
		
		
		setlocale (LC_ALL, "Portuguese");						// Seleção de linguagem
	
		printf ("###  Cartório da EBAC  ###\n\n");				// Apresentação
		printf ("Escolha a opção desejada do menu: \n\n");		// Início do menu
		printf ("\t1 - Registrar nomes\n");
		printf ("\t2 - Consultar nomes\n");
		printf ("\t3 - Deletar nomes\n\n");
		printf ("Opção: \n\n");									// Fim do menu

		scanf ("%d", &opcao);									// Armazenamendo a escolha
	
		switch (opcao)
		{
			case 1:
			printf ("Você escolheu o registro de nomes!\n");
			system ("pause");
			break;
			
			case 2:
			printf ("Você escolheu consultar os nomes!\n");
			system ("pause");
			break;
			
			case 3:
			printf ("Você escolheu deletar nomes!\n");
			system ("pause");
			break;
			
			default:
			printf ("Essa opção não está disponivel!\n");
			system ("pause");
			break;
		}
	}
}
