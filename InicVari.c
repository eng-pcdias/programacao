#include<stdio.h>
#include<stdlib.h>

int main()
{
	int evento = 5;			//cria a variavel 'evento' recebendo o valor 5
	char corrida = 'C';		//cria a variavel 'corrida' recebendo o caractere 'C'
	float tempo = 27.25;	//cria a variavel 'tempo' recebendo o valor '27.25'

	printf("\nO tempo vitorioso na eliminatoria %c", corrida);					      //imprime chamando a variavel 'corrida'				
	printf("\nda competicao %d foi %.2f.%c%c", evento, tempo, '\n', '\n');		//imprime chamando as variaveis 'evento' e 'tempo'

	system("Pause");
	return 0;
}
