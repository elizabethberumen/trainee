#include <stdio.h>

enum estados{
	INICIAL, ESTADO_1, ESTADO_2,ESTADO_FINAL
};

int main(int argc, char *argv[]) {
	enum estados estado_actual = INICIAL;
	int entrada;
	
	while (estado_actual != ESTADO_FINAL){
		
		switch(estado_actual){
			
			
		case INICIAL:
			printf("Ingresa un 1 o un 2: \nEstamos en el estado INICIAL");
			scanf("%d",&entrada);
			if (entrada==1){
				estado_actual=ESTADO_1;
				
			}
			else if (entrada ==2){
				estado_actual=ESTADO_2;
			}
		break;
			
		case ESTADO_1:
			printf("Ingresa un 1 o un 2: \nEstamos en el ESTADO_1");
			scanf("%d",&entrada);
			if (entrada==1){
				estado_actual=ESTADO_FINAL;
			}
			else if (entrada ==2){
				estado_actual=INICIAL;
			}
		break;	
		case ESTADO_2:
			printf("Ingresa un 1 o un 2: \nEstamos en el ESTADO_2");
			scanf("%d",&entrada);
			if (entrada==1){
				estado_actual=INICIAL;
			}
			else if (entrada ==2){
				estado_actual=ESTADO_FINAL;
			}
		break;
		case ESTADO_FINAL:
			printf("Este es el estado final\n");
			break;
		default:
			printf("Entrada invalida \n");
			estado_actual=INICIAL;
			break;
		}
	}
	
	return 0;
}

