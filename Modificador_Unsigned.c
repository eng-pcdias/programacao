#include <stdio.h>
#include <stdlib.h>

int main() {

	unsigned j = 4294967000UL;    //cria a constante 'j' sem sinal e atribui um valor especificando o tipo UL
	int i = j;      //cria a variavel i e atribui o valor de j 

	printf("\nVariavel unsigned = %u", j);    //imprime o valor de j com a formatacao para unsigned
	printf("\nVariavel int = %d\n", i);    //imprime o valor de i trarando a variavel como tipo inteiro

	system("pause");
	return 0;
}
