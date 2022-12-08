#include <stdio.h>
#include <stdlib.h>

int main() {

	int x = 3456L;
	float pi = 3.14F;
	double Dpi = 3.14L;

	printf("%-5d", x);    //define o espaco de 5 colunas da direita para a esquerda
	printf("%-5.2f", pi);   //define a quantidade de 2 casas decimais para o float.
	printf("%-5.2f\n", Dpi);
	
	system("pause");
	return 0;
}
