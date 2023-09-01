#include <stdio.h>       										// Biblioteca de comunica��o com o usu�rio
#include <stdlib.h>      										// Biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h>      										// Biblioteca de aloca��es de texto por regi�o
#include <string.h>												// Biblioteca respons�vel por cuidar das strings

int registro()
{
	
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf ("Digite o CPF a ser cadastrado: ");
	scanf ("%s", cpf);
	
	strcpy (arquivo, cpf);										// Respons�vel por copiar os valores das strings
	
	FILE *file;													// Cria o arquivo
	file = fopen (arquivo, "w");								// Cria o arquivo
	fprintf (file, cpf);										// Salva o valor da vari�vel	
	fclose (file);												// Fecha o arquivo
	
	file = fopen (arquivo, "a");								// Coloca uma virgula entre os dados
	fprintf (file, ",");
	fclose (file);
	
	printf ("Digite o nome a ser cadastrado: ");				// Mostra mensagem ao usu�rio
	scanf ("%s", nome);
	
	file = fopen (arquivo, "a");								// Recolhe o char "nome"
	fprintf (file, nome);
	fclose (file);
	
	file = fopen (arquivo, "a");								
	fprintf (file, ",");
	fclose (file);
	
	printf ("Digite o sobrenome a ser cadastrado: ");
	scanf ("%s", sobrenome);
	
	file = fopen (arquivo, "a");
	fprintf (file, sobrenome);
	fclose (file);
	
	file = fopen (arquivo, "a");
	fprintf (file, ",");
	fclose (file);
	
	printf ("Digite o cargo a ser cadastrado: ");
	scanf ("%s", cargo);
	
	file = fopen (arquivo, "a");
	fprintf (file, cargo);
	fclose (file);
	
	system ("pause");
	
	
}

int consulta()
{
	
	setlocale (LC_ALL, "Portuguese");							// Sele��o de linguagem
	
	char cpf[40];
	char conteudo[200];
	
	printf ("Digite o CPF a ser consultado: ");
	scanf ("%s", cpf);
	
	FILE *file;
	file = fopen (cpf, "r");
	
	if (file == NULL)
	{
		printf ("N�o foi poss�vel achar o arquivo, n�o localizado!.\n");
		
	}
	
	while ( fgets ( conteudo, 200, file ) != NULL )
	{
		printf ("\nEssas s�o as informa��es do usu�rio: ");
		printf ("%s", conteudo);
		printf ("\n\n");
	}
	
	system ("pause");
	
	
	
	
}

int deletar()
{
	printf ("Voc� escolheu deletar nomes!\n");
	system ("pause");
}

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
	
		system ("cls");
	
		switch (opcao)											// Inicio da sele��o
		{
			case 1:
			registro();
			break;
			
			case 2:
			consulta();
			break;
			
			case 3:
			deletar();
			break;
			
			
			default:
			printf ("Essa op��o n�o est� disponivel!\n");
			system ("pause");
			break;
		}														// Fim da sele��o
	}
}
