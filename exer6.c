/*Leia 2 valores A e B, que correspondem a 2 notas de um aluno. A seguir, calcule a média do aluno,
sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5 (A soma dos pesos portanto é 11). 
Assuma que cada nota pode ir de 0 até 10.0. */

#include <stdio.h>

int a, b;
float media;

int main (){

	printf("Digite a primeira nota: ");
	scanf("%d", &a);
	
	printf("Digite a segunda nota: ");
	scanf("%d", &b);

	media = (a * 3.5 + b * 7.5) / 11;
	
	printf("Media: %.2f", media);
	
	return 0;
}

