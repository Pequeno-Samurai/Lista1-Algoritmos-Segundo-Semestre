//Construa um algoritmo que calcule a m�dia aritm�tica de 3 n�meros quaisquer fornecidos pelo usu�rio.

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
