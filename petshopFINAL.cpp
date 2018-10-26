#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define SENHA_BRUNO 102030
#define RACAO_GATO 10.00
#define RACAO_CAES 12.50
#define REMEDIO 30.10
#define VACINA 70.00
main() {
	setlocale(LC_ALL,"PORTUGUESE");
	int senha, menu, peso, menu_produtos, qt_racao_gato, qt_racao_caes, qt_remedio, qt_vacina;
	float valor_tosa=0;
	float valor_gato, valor_caes, valor_remedio, valor_vacina, total;
	do{
		printf("\n Informe a senha ==> ");
		scanf("%i",&senha);
		
		if (senha==SENHA_BRUNO){
			printf("\n  ==> Bem vindo ao Sistema Bruno Pet");
			do {
			printf("\n	==>	MENU\n");
			printf("\n	==>1. Banho e tosa\n");
			printf("\n	==>2. Compra de produtos\n");
			printf("\n	==>3. Gerar nota fiscal\n");
			printf("\n	==>4. Zerar nota fiscal\n");
			printf("\n	==>0. Encerrar o sistema\n");
			scanf("%i",&menu);
			switch(menu){
				case (1):
					printf("\n ==> BANHO E TOSA\n");
					printf("\n ==> Qual o peso do animal a ser tosado?\n");
					scanf("%i",&peso);
					
					if(peso<0){
						printf("\n Peso digitado inválido!!");
						printf("\n ==> Qual o peso do animal a ser tosado?\n");
						scanf("%i",&peso);
						
					}else if(peso<=5){
						valor_tosa=30;
						printf("\n O valor da tosa custa R$%.2f\n",valor_tosa);
						
					}else if(peso<=10){
						valor_tosa=35;
						printf("\n O valor da tosa custa R$%.2f\n",valor_tosa);
						
					}else if(peso<=15){
						valor_tosa=40;
						printf("\n O valor da tosa custa R$%.2f\n",valor_tosa);
						
					}else if(peso<=20){
						valor_tosa=45;
						printf("\n O valor da tosa custa R$%.2f\n",valor_tosa);
						
					}else{
						valor_tosa=45+peso;
						printf("\n O valor da tosa custa R$%.2f\n",valor_tosa);
					}
					system("pause");
					break;
				case (2):
					do {
					printf("\n ==> CATÁLOGO DE PRODUTOS\n");
					printf("\n ==> 1. Ração para gatos (2 KGS) ==> R$10,00\n");
					printf("\n ==> 2. Ração para cães (2 KGS) ==> R$12,50\n");
					printf("\n ==> 3. Remédio A23 ==> R$30,10\n");
					printf("\n ==> 4. Vacina B87 ==> R$70,00\n");
					printf("\n ==> 0. Voltar ao menu anterior\n");
					printf("\n ==> Qual produto você deseja?\n");
					scanf("%i",&menu_produtos);
					switch(menu_produtos){
					
					case (1):
						printf("\n Qual a quantidade do produto? \n");
						scanf("%i",&qt_racao_gato);
						if(qt_racao_gato<0){
							printf("\n Valor inválido!! Digite novamente!");	
							printf("\n Qual a quantidade do produto? \n");
							scanf("%i",&qt_racao_gato);						
						}
						break;
					case (2):	
						printf("\n Qual a quantidade do produto? \n");
						scanf("%i",&qt_racao_caes);
						if(qt_racao_caes<0){
							printf("\n Valor inválido!! Digite novamente!");	
							printf("\n Qual a quantidade do produto? \n");
							scanf("%i",&qt_racao_caes);						
						}
						break;
					case (3):
						printf("\n Qual a quantidade do produto? \n");
						scanf("%i",&qt_remedio);
						if(qt_remedio<0){
							printf("\n Valor inválido!! Digite novamente!");	
							printf("\n Qual a quantidade do produto? \n");
							scanf("%i",&qt_remedio);						
						}
						break;
					case (4):
						printf("\n Qual a quantidade do produto? \n");
						scanf("%i",&qt_vacina);
						if(qt_vacina<0){
							printf("\n Valor inválido!! Digite novamente!");	
							printf("\n Qual a quantidade do produto? \n");
							scanf("%i",&qt_vacina);						
						}
						break;
					case (0):
						printf("\n Voltando ao menu principal\n");
						break;
							
					default: printf ("\n XXX ==> Opção Inválida\n");}
					}while(menu_produtos!=0);	
					break;
					
				case (3):
					printf("\n ==> GERAR NOTA FISCAL\n");
					if(valor_tosa!=0) {
					printf("\n O valor da tosa será: R$%.2f\n", valor_tosa);}
					if(qt_racao_gato!=0) {
					printf("\n O valor da ração de gatos é: R$%.2f\n", RACAO_GATO);
					printf("\n A quantidade da ração de gatos é: %i\n", qt_racao_gato);
					valor_gato=qt_racao_gato*RACAO_GATO;
					printf("\n Subtotal é: %.2f\n",valor_gato);
					}
					if(qt_racao_caes!=0) {
					printf("\n O valor da ração de cães é: R$%.2f\n", RACAO_CAES);	
					printf("\n A quantidade da ração de cães é: %i\n", qt_racao_caes);
					valor_caes=qt_racao_caes*RACAO_CAES;
					printf("\n Subtotal é: %.2f\n",valor_caes);
					}
					if(qt_remedio!=0) {
					printf("\n O valor do remédio A23 é: R$%.2f\n", REMEDIO);	
					printf("\n A quantidade do remédio é: %i\n", qt_remedio);
					valor_remedio=qt_remedio*REMEDIO;
					printf("\n Subtotal é: %.2f\n",valor_remedio);
					}
					if(qt_vacina!=0) {
					printf("\n O valor da vacina é: R$%.2f\n", VACINA);	
					printf("\n A quantidade da vacina é: %i\n", qt_vacina);
					valor_vacina=qt_vacina*VACINA;
					printf("\n Subtotal é: %.2f\n",valor_vacina);
					}
					total=valor_tosa+valor_gato+valor_caes+valor_remedio+valor_vacina;
					printf("\n O Valor total da compra será:R$%.2f", total);
					break;
				case (4):
					printf("\n ==> ZERANDO NOTA FISCAL\n");
					valor_tosa=0;
					qt_racao_gato=0;
					qt_racao_caes=0;
					qt_remedio=0;
					qt_vacina=0;
					printf("\n NOTA FISCAL ZERADA PARA NOVO PEDIDO!!\n");
					break;
				case (0):
					printf("\n ==> ENCERRANDO SISTEMA, ATÉ LOGO\n");	
					break;
				default: printf("\n Opção inválida! Escolha novamente!\n");
					break;
			
			}
			}while(menu!=0);

	
	
}	else{
			printf("\n XX ==> Senha Inválida, tente novamente!! \n");
			}
		}while(senha!=SENHA_BRUNO);
	}
