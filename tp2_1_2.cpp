
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 4
#define M 5

int main(){

int f,c;
double mt[N][M];
double *pmt;
pmt = (double*)mt;
srand(time(NULL));

for(f=0;f<N;f++){
		for(c=0;c<M;c++) {
			int i = f*M+c;
			*(pmt+i) = (rand() % 101 +(rand() % 51));
			printf(" %.lf ",*(pmt+i));
		}
		printf("\n");
	}
	return 0;
}