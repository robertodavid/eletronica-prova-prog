#include<stdio.h>
#include<stdlib.h>
#include <locale.h>



int main(){

	//Declara��o de vari�veis
	int numeroElementos=0, i;
	float totalX=0, mh=0, x=0;

	//Configura��o do idioma portugu�s
	setlocale(LC_ALL, "Portuguese");

	printf("\nCalculo da m�dia harmonica\n");
	printf("\nInforme o numero de elementos: \n");
	scanf("%d", &numeroElementos);				//recebe o numero de elementos a calcular
	
	for(i=1;i<=numeroElementos;i++){		//recebe o valor de cada elemento
		printf("\nInforme o valor de X%d: \n", i);
		scanf("%f", &x);
		totalX=(totalX+(1/x));			//divide 1 pelo calor recebido e armazena no acumulador totalX
	}
	mh=(numeroElementos/totalX);		//calcula a m�dia Harmonica  que � o numero de elementos dividoto pelo acumulador totalX

	
	printf("\nM�dia harmonica: %f \n", mh);
	

	return 0;
}

