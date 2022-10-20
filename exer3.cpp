//Construa um algoritmo que calcule a média aritmética de 3 números quaisquer fornecidos pelo usuário.

#include <stdio.h>

float num[3], media;

int main()
{
	
	for(int i=0;i<3;i++){
		
		printf("Digite o %d numero: ", i+1);
		scanf("%f", &num[i]);
	}	
	
	for(int i=0;i<3;i++){
	
	media += num[i];
	
	}
	
	printf("Media: %.2f", media / 3);
	
	return 0;
}
