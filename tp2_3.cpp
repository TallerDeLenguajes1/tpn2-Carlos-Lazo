#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define F 15
#define ls 999
#define li 100

int main(){
srand (time(NULL));

int elemento,C;

//(Limite superior - limite inferior +1) + limite inferior

C = rand() % 5; // (15-5+1) + 5

int Mat[C][F], *pM, i = 0, pares=0,*pV;

printf("Columnas:%i \tFilas:%i \nMatriz: \n",C,F);

pM=&Mat[0][0];

pV=(int *)calloc(15,sizeof(int));


for (i; i < F*C; i++) {

	elemento = rand() % (ls-li+1) + li;
	
	*pM=elemento;
	
	printf("%i ",*pM);
	
	if (*pM% 2 == 0 ){
		pares++;
	}

	if ((i+1)%C == 0){
	
		pV[i]=pares;
		printf("Pares: %i / Vector:%i \n\n",pares,pV[i]);
		pares=0;
		free(pV);    
	
	}

	pM++;
}

}