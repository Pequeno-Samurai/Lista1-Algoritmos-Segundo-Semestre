//Construa um algoritmo que calcule a área de um círculo cujo raio é fornecido pelo usuário (use área= 3.14 x raio2).

#include <stdio.h>

int op;
double raio, area;

int main()
{
	
	do {
	
	printf("1.Iniciar ou 2.Sair\n");
	scanf("%d", &op);
	
	if (op==1){
	
	printf("\nDigite o raio do circulo: ");
	scanf("%lf", &raio);
	
	area = 3.14 * raio * raio;
	
	printf("\nArea do circulo: %.2lf\n", area); 
	
	}
	
	else {
		printf("\nObrigado, até mais ! :)");
	}
	
	} while (op!=2);
	
	return 0;
}
