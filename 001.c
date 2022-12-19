#include <stdio.h>

int Test=10;
int *pTest=&Test;
int i;


int main(int argc, char *argv[]) {
	

	printf("Este es el valor de la variable de Test: %d \n", *pTest);
	
	*pTest=21;
	printf("Este es el valor de la variable de Test: %d \n", Test);
	
	*pTest=22;
		printf("Este es el valor de la variable de Test: %d \n", Test);
	
	*pTest=23;
		printf("Este es el valor de la variable de Test: %d \n", Test);
		
		for(i=0;i<10;i++){
			*pTest=i;
			printf("Este es el valor del ciclo for: %d \n", Test);
		}
	
	
	return 0;
}
