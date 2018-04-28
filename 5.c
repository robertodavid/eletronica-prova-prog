#include<stdio.h>
#include<stdlib.h>
#include <locale.h>


int main(){

	//Declaração de variáveis
	int altura, cont=0, espaco, asterisco, i, j;

	//Configuração do idioma português
	setlocale(LC_ALL, "Portuguese");
	printf("\nInforme a altura do triangulo:\n");
	scanf("%d", &altura);
	
	espaco=altura-1;
	asterisco=1;
	while(cont < altura){		//numero de vezes que vai repetir a quebra de liha e incrementos
		for(i=0;i<espaco;i++){	//numero de espaços que vai ter antes do asterisco
			printf(" ");	
		}
		for(j=0;j<asterisco;j++){ //numero de asteriscos que vai ter na linha
			printf("*");
		}
	
		printf("\n"); //quebra a linha
		cont++; 	//incrementa o contador que define a altura do triangulo
		espaco--;	//decrementa o mumeto de espaços que vai ter na proxima linha
		asterisco=asterisco+2; //aumanta o numero de asteriscos em 2 a partir da segunda linha para ter 2 lados iguais
	}

	return 0;
}


