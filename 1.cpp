#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese");
	
	int vetor[7] = {1,0,5,-2,-5,7};
	int soma;
	
	soma = vetor[0] + vetor[1] + vetor[5];
	printf("A soma dos posi��es 0, 1, 5 �: %i\n", soma);
		
	vetor[4] = 100;
	
	for(int i=0; i<6; i++){
		printf("\nO n�mero armazenado na posi��o %i do vetor � %i", i,vetor[i]);
	}
	
	
	
return 0;
}
