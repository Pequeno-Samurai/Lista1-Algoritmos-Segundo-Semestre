#include <stdio.h>

int main(){
	
	int x, y;
	
	printf("Digite um valor: ");
	scanf("%d", &x);
	
	printf("Digite um valor: ");
	scanf("%d", &y);
	
	printf("\nResto da divisao: %d\nQuociente: %d", x%y , x/y);
	
	return 0;
}
