#include <stdio.h>       										// Biblioteca de comunica��o com o usu�rio
#include <stdlib.h>      										// Biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h>      										// Biblioteca de aloca��es de texto por regi�o

int main()
{
	
	int opcao = 0;												// Definindo vari�veis
	int laco = 1;
	
	for ( laco = 1 ; laco = 1 ;)
	{
	
		system ("cls");
		
		
		setlocale (LC_ALL, "Portuguese");						// Sele��o de linguagem
	
		printf ("###  Cart�rio da EBAC  ###\n\n");				// Apresenta��o
		printf ("Escolha a op��o desejada do menu: \n\n");		// In�cio do menu
		printf ("\t1 - Registrar nomes\n");
		printf ("\t2 - Consultar nomes\n");
		printf ("\t3 - Deletar nomes\n\n");
		printf ("Op��o: \n\n");									// Fim do menu

		scanf ("%d", &opcao);									// Armazenamendo a escolha
	
		switch (opcao)
		{
			case 1:
			printf ("Voc� escolheu o registro de nomes!\n");
			system ("pause");
			break;
			
			case 2:
			printf ("Voc� escolheu consultar os nomes!\n");
			system ("pause");
			break;
			
			case 3:
			printf ("Voc� escolheu deletar nomes!\n");
			system ("pause");
			break;
			
			default:
			printf ("Essa op��o n�o est� disponivel!\n");
			system ("pause");
			break;
		}
	}
}
