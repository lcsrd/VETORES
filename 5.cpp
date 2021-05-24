#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"portuguese");
	int vet[10], i, pmaior, pmenor, menor, maior;
	
	for(i = 0; i < 10; i++){
		scanf("%d", &vet[i]);
	}
	
	menor = vet[0];
	maior = vet[0];
	pmaior = 0;
	pmenor = 0;
	
	for(i = 1; i < 10; i++){
		if(vet[i] > maior){
			maior = vet[i];
			pmaior = i;
		}
		if(vet[i] < menor){
			menor = vet[1];
			pmenor = i;
		}
	}
	
	printf("Maior número: %d -- Posição: %d", maior, pmaior);
	printf("\n");
	printf("Menor número: %d -- Posição: %d", menor, pmenor);
		
return 0;
}
