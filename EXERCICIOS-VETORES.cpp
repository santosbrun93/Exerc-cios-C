#include <stdio.h>
#include <string.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"");
	char nome[50];
	char apelido[50]="FLAVIO";
	char resposta;
	
	printf("\n Informe o nome ==> ");
	fflush(stdin); //este comando serve para zerar a as entradas de dados para evitar que haja sobreposi��o de vari�veis//
	gets(nome); //este comando serve para atribuir strings com v�rios caracteres como vetores em posi��es especificadas para cada letra//
	printf("\n Voc� � gremista? S/N");
	fflush(stdin); 
	scanf("%c",&resposta);
	if (resposta == 'S')printf("\n Tri da am�rica");
	else printf("\n SOFREDOR!!");
	
	strcpy(string_destino,string_origem); //esse comanda da biblioteca de fun��es de string serve para atribuir o cont�udo de uma string para outra//
	strcat(string_destino,string_origem); //esse comando serve para atribuir o conte�do da vari�vel origem no final da vari�vel destino. Exemplo campos de preenchimento nome e sobrenome//
	strlen();
	strcmp(string1,string2); //serve para criar uma compara��o entre duas string para ver se ambas s�o identicas.//
	toupper; //transforma um caractere digitado em min�sculo em mai�sculo. Esse tipo de fun��o ajuda na hora de transformar os dados de forma igual para mandar para o banco de dados.//
	tolower; //transforma um caractere digitado em mai�sculo em minusc�lo//
	isalnum; //verifica se o caracter ou inteiro passado como par�metro � alfanum�rico. Isso inclui todos os n�meros//
	isalpha; //verifica se o caracter
	isspace; //verifica se o caracter dentro de uma string � um espa�o em branco, � p�ssivel utilizar para substituir espa�os em branco por algo//
	islower;
	isupper;
	
	
	
	
	
	
	
	
}
