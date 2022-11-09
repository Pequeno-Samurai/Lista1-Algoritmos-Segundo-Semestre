/*Fazer um algoritmo para auxiliar um construtor a descobrir a quantidade de rolos e a quantidade de 
metros avulsos de fios que ele precisa adquirir. Sabe-se que o construtor tem a quantidade total 
de fios em metros a serem utilizados na instalação elétrica da obra e que cada rolo de fio tem 50 metros.*/

#include <stdio.h>

int main(){
	
	int metros, rolo=50, calculo, quantidade_rolos, quantidade_metros;
	
	printf("%Quantos metros voce precisa ?: ");
	scanf("%d", &metros);
	
	calculo = (metros / rolo);
	
	quantidade_rolos = calculo;
	
	quantidade_metros = (calculo) * rolo;
	
	printf("Voce precisa de %d rolos de fios e %.1f metros avulsos de fios", calculo, (float)quantidade_metros);
	
	return 0;
}
