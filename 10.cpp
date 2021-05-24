#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"portuguese");
    int valor[5], i, maior, menor, pmaior, pmenor;
    
    for(i=0; i<5; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &valor[i]);
        
        if(i == 0) {
            maior = valor[i];
            menor = valor[i];
            pmaior = i;
            pmenor = i;
        }
        if(valor[i] > maior) { 
            maior = valor[i];
            pmaior = i;
        }
        if(valor[i] < menor) {
            menor = valor[i]; 
            pmenor = i;
        }
    }
    
    printf("\nMaior valor: %d -- Posição %d", maior, pmaior+1);
    printf("\n");
    printf("Menor valor: %d -- Posição %d", menor, pmenor+1);

return 0;
}
