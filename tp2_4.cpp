  
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tama 100

typedef struct compu{

	int velocidad;
	int anio;
	int cantidad;
	char *tipos_p;

}compu;

void cargaPC(compu *p_computadoras, int n);
void mostrarPC(compu *p_computadoras, int n);
void vieja(compu *p_computadoras, int n);
void rapida(compu *p_computadoras, int n);

int main(){
   
	srand (time(NULL));
	int n;
	char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
	char *tipos_p;

	tipos_p = &tipos[0][0];

	puts("Cantidad de computadoras");
	fflush(stdin);
	scanf("%i",&n); 
	fflush(stdin);
	compu computadoras[n];
	compu *p_computadoras;

	p_computadoras=computadoras;

	cargaPC(p_computadoras, n);
	mostrarPC(p_computadoras,n);
	vieja(p_computadoras, n);
	rapida(p_computadoras,n);
	getchar();
return 0;
}

void cargaPC(compu *p_computadoras, int n){

int velo,year,nuc,tipos;


	puts("Presione cualquier tecla para cargar los valores");
for (int i = 0; i < n; i++){

	velo=rand() % 3 + 1;
	year=rand() % 18 + 2000;
	nuc=rand() % 4 + 1 ;

	p_computadoras->velocidad=velo;
	p_computadoras->anio=year;
	p_computadoras->cantidad=nuc;
	
	fflush(stdin);
	getchar();//Agrego el enter asi el TIME del srand me genere un valor distinto
	fflush(stdin);
	p_computadoras++;
}
}


void mostrarPC(compu *p_computadoras, int n){

for (int i = 0; i < n; i++){
	printf("Computadora: %i\n",(i+1));
	printf("Velociada: %i\n",p_computadoras->velocidad );
	printf("Anio: %i\n",p_computadoras->anio );
	printf("Nucleos: %i\n",p_computadoras->cantidad );

	fflush(stdin);
	puts("Presione cualquier tecla para continuar");
	getchar();//Agrego el enter asi el TIME del srand me genere un valor distinto
	fflush(stdin);
	p_computadoras++;
}

}

void vieja(compu *p_computadoras, int n){
int min,m;
min=p_computadoras->anio;

	for (int i = 0; i < n; i++){
	
		if ((p_computadoras->anio)<min){
			
			min=p_computadoras->anio;		
			m=i;
		}		

		p_computadoras++;
	}

	printf("La computadora mas viejas es:%i, modelo:%i \n",m+1,min);
}

void rapida(compu *p_computadoras, int n){
int max,m;
max=p_computadoras->velocidad;

	for (int i = 0; i < n; i++){
	
		if ((p_computadoras->velocidad)>max){
			
			max=p_computadoras->velocidad;		
			m=i;
		}		

		p_computadoras++;
	}

	printf("La computadora mas rapida es:%i, Velociada:%i \n",(m+1),max);
}