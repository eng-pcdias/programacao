#include <stdio.h>
#include <stdlib.h>

int main() {

	int x = 3456L;
	float pi = 3.14F;
	double Dpi = 3.14L;

	printf("A quantidade de alunos sao: %2d", valor);	//define o espaco de 2 colunas a esquerda
	printf("\nA quantidade de alunos sao: %4d", valor);	//define o espaco de 4 colunas a esquerda
	printf("\nA quantidade de alunos sao: %6d", valor);	//define o espaco de 6 colunas a esquerda
	printf("%-5d", x);    //define o espaco de 5 colunas da direita para a esquerda
	printf("%-5.2f", pi);   //define a quantidade de 2 casas decimais para o float.
	printf("%-5.2f\n", Dpi);
	
	system("pause");
	return 0;
}
