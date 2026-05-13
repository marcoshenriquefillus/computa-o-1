#include<stdio.h>
#include<locale.h>
#include <stdlib.h>
#include <time.h>

int main()
{

	setlocale(LC_ALL, "Portuguese");
	srand(time(0));

	int n1, n2, n3, nsecreto;
	int chute;
	int tentativas;
	int chute1, chute2, chute3;
	int sim, não, repetiu;

	n1 = (rand()%20)+1;
	n2 = (rand()%20)+1;
	n3 = (rand()%20)+1;
	nsecreto = n1, n2, n3;
	tentativas = 1;


	do {
		printf("Os números secretos são: %d %d %d \n", n1, n2, n3);
		printf("Digite os números: ");
		scanf("%d %d %d", &chute1, &chute2, &chute3);

		chute = chute1, chute2, chute3;

		if(chute != nsecreto)
			tentativas = tentativas + 1;
	}
	while(chute != nsecreto);

	printf("Quantidade de tentativas: %d\n", tentativas);

	if(tentativas <= 30)
	{
		printf("Você é ÓTIMO!\n");
	}
	else if(tentativas <= 60)
	{
		printf("Você é BOM!\n");

	}
	else if(tentativas <=100)
	{
		printf("Você é FRACO!\n");

	}
	else
	{
		printf("Você é PÉSSIMO!!!\n");

	}



}
