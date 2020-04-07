#include <stdio.h>

#define N 4
#define M 5

int main(){
    
int f;
double mt[N][M];

double *p_mt;

p_mt=&mt[0][0];
  

for(f = 0;f<N*M; f++) {
        
    printf("%.2f\t ",*p_mt);
    p_mt++;
        
     if ((f+1)%N == 0){//para diferenciar las filas. Cuando encuentre un multiplo de N filas
        printf("\n\n");    
    }
  
}
 return 0;

}