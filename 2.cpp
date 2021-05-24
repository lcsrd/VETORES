#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese");
	
	 int array[7];
	 
	 for(int i = 0; i <= 6; i++){
	 	scanf("%i", &array[i]);
	 }
	 
	 for(int i = 0; i <= 6; i++){
	 	printf("\n%i", array[i]);
	 }

return 0;
}
