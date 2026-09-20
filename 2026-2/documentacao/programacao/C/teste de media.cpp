#include <stdlib.h>
#include <stdio.h>


int main ()
{
	float n1, n2, n3, mm;
	
	printf("Digite o primeiro valor \n");
	scanf("%f", &n1);
	printf("Insira o segundo valor \n");
	scanf("%f", &n2);
	printf("Segundo valor lido. \n");
	printf("Insira o terceiro e ultimo valor \n");
	scanf("%f", &n3);
	printf("Terceiro valor lido. \n");
	mm = (n1 + n2 + n3) / 3.0;
	printf("A media dos valores inseridos = %1.3f \n \n", mm);
	
	system("pause");
	
	return 0;
}
