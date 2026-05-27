/* 1) Implemente um programa em C que preenche os elementos de um vetor de forma a permitir apenas a inserção de
   valores distintos. Caso o usuário tente inserir um valor já existente, o programa deve alertar a duplicidade e
   solicitar um novo valor. */

#include <stdio.h>

#define TAM 5

int main() {

	int vet[TAM];
	int i, j, repetido;
	for(i = 0; i< TAM; i++) {
		do {
			repetido = 0;
			printf("Digite o valor %d:", i+ 1);
			scanf("%d", &vet[i]);
			for(j = 0; j < i; j++) {
				if(vet[i] == vet[j]) {
					repetido = 1;
					printf("Valor repetido. Digite outro.\n");
				}
			}
		} while(repetido);
	}
	printf("\nVetor final: \n");
	for(i = 0; i < TAM; i++) {
		printf("%d", vet[i]);
	}


	return 0;
}
