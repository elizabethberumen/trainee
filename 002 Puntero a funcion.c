#include <stdio.h>

int add(int a, int b);

int main(int argc, char *argv[]) {
	
	int a,b;
	int (*ip)(int,int);
	int result;
	
	printf("Ingresa los valores de a y b: \n");
	scanf("%d %d", &a, &b);
	
	ip=add;
	result=(ip)(a,b);
	printf("Valor despues de utilizar la funcion es: %d", result);
	
	
	return 0;
}
int add(int a, int b){
	int c=a+b;
	return c;
}


