#include <stdlib.h>
#include <stdio.h>

int main()
{
	float numy, numx, numb, numa;
	
	printf("Insira o valor de A \n");
	scanf("%f", &numa);
	
	printf("Insira o valor de B \n");
	scanf("%f", &numb);
	
	printf("Insira o valor de X \n");
	scanf("%f", &numx);
	
	system("pause");
	
	printf("---- CALCULO ---- \n");
	
	printf("  		2 + A	\n");
	printf("Y =		-----	- 2 . X \n");
	printf("  		B + 3	\n");
	
	numy = ((2 + numa) / (numb + 3)) - (2 * numx);
	
	printf("O valor final da conta equivale a %f", numy);
	
	return 0;
}