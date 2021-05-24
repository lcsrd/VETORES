#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"portuguese");
	int vet[5], i, maior = vet[0], pmaior = 0;
	
	for(i = 0; i < 5; i++){
		printf("Digite o valor do elemento %d: ", i+1);
		scanf("%d", &vet[i]);	
	}
	
	printf("O vetor é: %d", vet[0]);
	
	for(i = 1; i < 5; i++){
		printf("%d", vet[i]);
		if(vet[1 > maior]){
			maior = vet[i];
			pmaior = i;
		}
	}
	
	printf("O maior elemento: %d -- Posição: %d", maior, pmaior+1, pmaior);
	
return 0;
}
