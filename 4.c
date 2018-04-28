#include<stdio.h>
#include<stdlib.h>
#include <locale.h>



int main(){

	//Declaração de variáveis
	int nAparelhos=0, dias=0, i, maior=0;
	float valorkwh=0, consumo=0, consumoDia=0, consumoTotal=0, horas=0, totalW=0,valorTotal=0;

	//Configuração do idioma português
	setlocale(LC_ALL, "Portuguese");
	
	printf("\nCalculo de custo de energia:\n");
	
	printf("\nInforme o numero de aparelhos utilizados:\n");
	scanf("%d", &nAparelhos);
	printf("\nInforme o número de dias a ser calculado: \n");
	scanf("%d", &dias);
	printf("\nInforme o valor do kwh: \n"); //o valor deve ser informado com , e não com .
	scanf("%f", &valorkwh);
	
	for(i=1;i<=nAparelhos;i++){		//vai repetir de acordo com o numero de aparelhor infomado
		printf("\nInforme o consumo do %dº aparelho( em W): \n", i);
		scanf("%f", &consumo);					//o consumo deve ser infomado em W e n em kw para facilitar o calculo de acordo com o exemplo
		
		printf("\nInforme o numero de horas de uso por dia: \n");
		scanf("%f", &horas);
		
		
		consumoDia=(consumo*horas); //calcula o consumo por dia do aparelho
		if(consumoDia > 10000){		//verifica se o consumo foi maior de 10kw (10000w)
			maior++;		//se for maior ele incrementa o contador de aparelhos com consumo maior de 10kw
		}
		
		
		
		consumoTotal=(consumoTotal+(consumoDia));   //acumula o consumo de todos os aparelhos em uma unica variavel
	}
	totalW=(consumoTotal * dias); //calcula o consumo total do periodo indicado (dias)
	
	if(totalW > 200000){		//verifica se o consumo do periodo foi superior a 200000w (200k)
		valorTotal = ((totalW * (valorkwh/1000))* 1.1); //quando maior, calcula o valor e adiciona 10% de multa (*1.1)
		printf("\nMulta de 10%!(consumo superior a 200kWh)\n");	//informa q a multa será cobrada
	}else{
		valorTotal = (totalW * (valorkwh/1000)); //se não for superior ele não adiciona a multa de 10%
	}
	
	printf("\nValor final: R$ %.2f \n", valorTotal);  //informa o valor total a ser pago
	printf("\n %d Aparelho(s) ultrapassou os 10kWH diarios\n", maior);		//informa quantos aparelhos tem consumop superior a 10km por dia
	
	
	
	return 0;
}


