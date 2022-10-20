#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int menu;

struct funcionario
{
	char nome[99], sexo;
	int horas, matricula, dias;
	float valor_hora;
};
int main ()
{
		
	struct funcionario func1;
	printf("\nDigite o nome do funcionario: ");
	gets(func1.nome);

	printf("\nDigite seu sexo f ou m: ");
	scanf("%s", &func1.sexo);
	printf("\nDigite o numero da matricula: ");
	scanf("%d", &func1.matricula);
	printf("\nDigite o numero de horas trabalhadas diariamente: ");
	scanf("%d", &func1.horas);
	printf("\nDigite o valor que recebe por hora trabalhada: ");
	scanf("%f", &func1.valor_hora);
	printf("\nDigite a quantidade de dias trabalhados no mes: ");
	scanf("%d", &func1.dias);
	float salario = func1.dias * (func1.horas * func1.valor_hora);
	printf("\nNome: %s", func1.nome);
	switch (func1.sexo)
	{
		case 'f':
			printf("\nSexo: feminino");
			break;
		case 'm':
			printf("\nSexo: masculino");
			break ;
		default:
			printf("\n%s invalido", func1.sexo);
			break;
	}
	printf("\nSalario: %.2f", salario);
	
	return 0;
}

