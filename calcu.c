#include <stdio.h>

int main(void){
	
	int opcao;
	float divi, multi, soma, sub, n1, n2;
	
	printf("Bem vindo(a) ah mini calculadora!");
	printf("\nEscolha uma opcao para calculo: ");
	printf("\n\n1- Soma");
	printf("\n2- Multiplicacao");
	printf("\n3- Divisao");
	printf("\n4- Subtracao");
	printf("\n==>");
	scanf("%i", &opcao);
	
	if(opcao<1 || opcao>4){
		printf("\nEscolha somente de 1 a 4.");
		return 1;
	}
	
	printf("\nDigite dois numeros (podem ser decimais, mas use ponto em vez de vírgula):");
	scanf("%f %f", &n1, &n2);
	
	switch(opcao){
		case 1:
			soma= n1+n2;
			printf("\nResultado: %.2f", soma);
		 
		break;
		
		case 2:
			
			multi=n1*n2;
			printf("\nResultado: %.2f", multi);
		
		break;
		
		case 3:
			
			if(n2!=0){
				divi=n1/n2;
				printf("\nResultado: %.2f", divi);
			
			}else{	
				printf("\nNao eh possivel dividir por zero!");
			}
		break;
		
		case 4:
			
			sub= n1-n2;
			printf("\nResultado: %.2f", sub);
		
		break;
				
		default:
		printf("\nOpcao invalida...");	
	}
	
	return 0;
}