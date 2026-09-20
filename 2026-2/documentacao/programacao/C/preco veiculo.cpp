#include <stdlib.h>
#include <stdio.h>

int main ()
{
	char nome_veic[50];
	float prec_auto, prec_fab, val_com, val_imp;
	val_imp = 0.45;
	val_com = 0.28;
	
	printf("Insira o nome do veiculo: \n");
	scanf("%s", &nome_veic);
	printf("Insira o valor de custo de fabrica: \n");
	scanf("%f", &prec_fab);
	
	printf("----CALCULO DO PRECO FINAL---- \n	");
	prec_auto = prec_fab + (prec_fab * val_imp) + (prec_fab * val_com);
	
	system("pause");
	
	printf("O veiculo %s \n", nome_veic);
	printf("Seu preco final equivale a R$ %4.2f", prec_auto);
	
	system("pause");
	
	return 0;
	
}