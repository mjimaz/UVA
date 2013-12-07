#include <stdio.h>
#include <math.h>

#ifndef max
	#define max( a, b ) ( ((a) > (b)) ? (a) : (b) )
#endif

#ifndef min
	#define min( a, b ) ( ((a) < (b)) ? (a) : (b) )
#endif

int main(){

   int scenario, d, n, i,j, k, w;
   int Ux, Lx;
   int Ly, Ry;

   int x[10], y[10], p[10];
   int b[10][10];
   int damage, temp;
   int bx, by, bmax;

   scanf("%d",&scenario);

   do{

	   scanf("%d",&d);
	   scanf("%d",&n);

	   for(i=0;i<n;i++)
		   scanf("%d %d %d",&x[i], &y[i], &p[i]);

	   for(w=0;w<n;w++){
		   Ux = max(x[w]-d, 0);
		   Lx = min(x[w]+d, 1024);
		   Ly = max(y[w]-d, 0);
		   Ry = min(y[w]+d, 1024);

		   for(i=Ux; i<=Lx; i++){
			   for(j=Ly; j<=Ry; j++){

				   damage = 0;

				   for(k=0;k<n;k++){
						temp = max(abs(x[k] - i), abs(y[k] - j));
						if(temp <= d)
							damage = damage+ p[k];
				   }

				   if(bmax < damage){
					   bx = i;
					   by =j;
					   bmax = damage;
				   }
			   }
		   }
	   }

		printf("%d %d %d\n", bx, by, bmax);

   }while(--scenario > 0);

   return 0;
}