/*Construa um algoritmo que leia um número inteiro de horas e mostre 
ao usuário o correspondente em minutos e segundos destas horas*/

#include <stdio.h>

int op, hora, minutos = 60, segundos = 3600;

int main ()
{
	do {
	
	printf("1.Iniciar\n2.Sair!\n");
	scanf("%d", &op);
	
	if (op==1){
	
	printf("\nDigite uma hora: ");
	scanf("%d", &hora);

	printf("%d horas ou %d minutos e %d segundos\n", hora, hora * minutos, hora * segundos);
	
	}
	
	else {
		printf("\nObrigado, ate mais :)");
	}
	
 	} while (op != 2);
 	
	return 0;
}
