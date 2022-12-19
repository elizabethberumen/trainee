#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {

	int *ptr; //direccion de memoria
	ptr=(int*)malloc(4*sizeof(int));
	
	if(ptr==NULL){
		printf("Memory is not allocated \n");
		
	}
	else{
		printf("Memory is allocated \n");
	}
	
	return 0;
}

