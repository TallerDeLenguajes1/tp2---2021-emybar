#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FILA 15

int main(){
	int mat[FILA][15],vec[15],i,j,col;
	int *pmat, *pvec;

	pmat = (int*)mat;
	pvec = vec;
    srand(time(NULL));
	col = rand()% 11+5;

	for(i=0;i<FILA;i++){
		int pares = 0;
		for(j=0;j<col;j++){
			int t = i*col+j;
			*(pmat+t) = rand() % 900 + 100 ;
			printf(" %d ",*(pmat+t));
			
			if(*(pmat+t)%2 == 0){
				pares++;
			}
		
		}
		
		*(pvec+i) = pares;
		printf("La fila %d tiene %d numeros pares \n", i, pares);
		printf("\r\n");
    
	}
    printf("EL vector con las cantidad de pares por fila\n");
	for(i=0;i<15;i++){
		printf(" %d ",*(pvec+i));
	}

    free(pmat);
	free(pvec); 


	return 0;
}