#include<stdio.h>
#include<stdlib.h>

int main() 
{
	int i = 1;
	int soma = 0;
	printf("Digite dez valores para exibir o resultado final somado:");
	while (i <= 10) {
		
		scanf("%d",&i);
		soma += i;
	}
	
	printf("O valor total da soma e: %d\n", soma);
	return 0;	
}