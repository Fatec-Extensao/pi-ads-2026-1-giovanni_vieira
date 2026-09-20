#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

int main ()
{	
	SetConsoleOutputCP(CP_UTF8);
	float peso, altura;
	char sexo;
	printf ("Digite a altura: ");
	scanf ("%f", &altura);
	printf ("Digite sexo (M/F)");
	fflush (stdin);
	scanf ("%c", &sexo);
	if ((sexo == 'M') || (sexo == 'm'));
		peso = (72.7 * altura) - 58;
	else 
		if ((sexo == 'F') || (sexo == 'f'));
			peso = (62.1 * altura) - 44.7;
		else{
			peso = 0;
			printf ("Código INVALIDO!");
		}
	printf ("Peso ideal é %0.2f \n", peso);
	system ("pause");
}