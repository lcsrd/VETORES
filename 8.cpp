#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"portuguese");
	int i;
	float notas[15], media;
	
	for(i = 0; i < 15; i++){
		printf("Digite a nota do aluno %d: ", i+1);
		scanf("%f", &notas[i]);
		
		media += notas[i] / 15;
	}
	
	printf("A média geral é: %.2f", media);
	
return 0;
}
