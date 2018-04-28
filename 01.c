#include<stdio.h>
#include<stdlib.h>
#include <locale.h>



int main(){

	//Declaração de variáveis
	int numeroDeResistores=0, resistencia=0, opc=0, i;
	float vs=0, it=0, ir=0;

	//Configuração do idioma português
	setlocale(LC_ALL, "Portuguese");

	//Corpo main
	do{
		system("cls");			//limpa a tela
		printf("Informe o numero de resistores: \n");
		scanf("%d", &numeroDeResistores);
		printf("\ninforme a tensão da Fonte de alimentação: \n");
		scanf("%f", &vs);
		for(i=0;i<numeroDeResistores;i++){		//repete a leitura dos valores dos resistores
			printf("informe a resistencia de R%d: \n", (i+1));
			scanf("%d", &resistencia);
			ir=(vs/resistencia);		//calcula a Ir
			it=it+ir;					//acumula todas as I
			printf("\nI%d = %f\n", (i+1), ir); //informa Ir
		}	
		printf("\nIt = %f\n",it);	//informa a Itotal
		do{									//verifica se a opção digitada é valida (1 ou 2)
			printf("\nDeseja executar novamente?<1-sim><2-não>\n");
			scanf("%d", &opc);	
		}while(opc <1 || opc > 2);  
		
		
	}while(opc == 1);	//encerra o primeiro DO, se a opção for 1 ele repete, se for 2 ele fecha o programa




	return 0;
}



