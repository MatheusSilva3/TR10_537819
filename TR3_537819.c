#include <stdio.h>
#include <stdlib.h>

//MODELO DE EXEMPLO

int main(){
   
   	//Variaveis usadas
   	unsigned int x[200];
   	int y;
   	int z;
   	int k;
   	int w;
   	int j;
   	int i;
   	
   	//#########################
   	
   	//AREA DE CODIGO
   	
   	y = 0;
	z = 0;
	k = 0;
	w = 0;

	j = 0;
	i = 0;
	
	//laço usado para zerar todos os indices do vetor x
	for (w = 0; w < 201 ; w++){
		x[w] = 0;
	}
	
	//laço usado para repetir as funções
	while (y != -1) {
	
		printf("Digite um numero de 0 a 5000(digite -1 para finalizar): ");
   		scanf("%d",&y);

		//condição para saber se o numero vai de 0 a 5000 e armazenar
		if (y >= 0 && y <= 5000){
   			z = y / 32;
			k = y - (32 * z);
			x[z] = x[z] | (1 << k);
   		}
		//condição para saber se o numero e -1 e encerar o laço
   		else if(y == -1){
   			printf("\na ordem e: \n");
   		}
		//condição para printar que o numero e invalido
   		else{
   			printf("numero invalido!!! ");
   		}
   		
	}

	//laço parar percorer o vetor x
	for (i = 0; i < 201 ; i++) {
		
		//laço parar percorer o local escolhido do vetor
		for (j = 0; j <= 31; j++) {
			
			//condição para saber se o bit ta ligado ou nao e printar
			if ((x[i] >> j) & 1) {
				w = (32 * i) + j;
				printf(" - %d\n", w);
			}
			
		}
		
	}
	

	return 0;
}
   	
   	//#########################
