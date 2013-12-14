#include <stdio.h>
#include <stdlib.h>

#ifndef max
	#define max( a, b ) ( ((a) > (b)) ? (a) : (b) )
#endif

#ifndef min
	#define min( a, b ) ( ((a) < (b)) ? (a) : (b) )
#endif

int main(){

   int **a = malloc(sizeof *a * 1025);
   int i, j, scenario, d, n, w;
   int **x = malloc(sizeof *x * 50);
   int **y = malloc(sizeof *y * 50);
   int **p = malloc(sizeof *p * 50);
   int Ux, Lx, Ly, Ry;
   int bx, by;
   int damage, loop;

   if (a){
   		for (i = 0; i < 1025; i++){
     		a[i] = malloc(sizeof *a[i] * 1025);
		}
	}
	if (x){
	   		for (i = 0; i < 50; i++){
	     		x[i] = malloc(sizeof *x[i] * 50);
			}
	}
	if (y){
	   		for (i = 0; i < 50; i++){
	     		y[i] = malloc(sizeof *y[i] * 50);
			}
	}
	if (p){
	   		for (i = 0; i < 50; i++){
	     		p[i] = malloc(sizeof *p[i] * 50);
			}
	}
	scanf("%d",&scenario);


	for(loop=0;loop<scenario;loop++){
		scanf("%d",&d);
	   	scanf("%d",&n);

	   	for(i=0;i<n;i++){

		   scanf("%d %d %d",&x[loop][i], &y[loop][i], &p[loop][i]);
	   }

		for( i = 0 ;i < 1025 ; i++)
			for( j = 0 ;j < 1025 ; j++)
				a[i][j]=0;

		damage=0;

		for(w=0;w<n;w++){
			Ux = max(x[loop][w]-d, 0);
			Lx = min(x[loop][w]+d, 1024);
			Ly = max(y[loop][w]-d, 0);
		   	Ry = min(y[loop][w]+d, 1024);

			for(i=Ux; i<=Lx; i++){
				for(j=Ly; j<=Ry; j++){
					a[i][j] = a[i][j] + p[loop][w];
					if(a[i][j] > damage){
						damage = a[i][j];
						bx = i;
						by =j;
					}
				}
			}
	   }
   		printf("%d %d %d\n", bx, by, damage);
   }
   return 0;
}