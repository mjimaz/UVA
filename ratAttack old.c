#include <stdio.h> //Standard I/O library
#include <math.h>  //math library
#include <time.h>

#ifndef max
	#define max( a, b ) ( ((a) > (b)) ? (a) : (b) )
#endif

#ifndef min
	#define min( a, b ) ( ((a) < (b)) ? (a) : (b) )
#endif

int main(){

   int scenario, d, n, i,j, k, w, e;
   int Ux, Lx;//x-coordinates for search square U:Upper, L:Lower
   int Ly, Ry;//y-coordinates for search square L:Left, R:Right

   int x[10], y[10], p[10]; //create arrays to store rat population information
   int b[10][10];
   int damage, temp;
   int bx, by, bmax;
   clock_t begin, end;
   double time_spent;



   scanf("%d",&scenario);

   do{

	   scanf("%d",&d);
	   scanf("%d",&n);

	   for(i=0;i<n;i++)
		   scanf("%d %d %d",&x[i], &y[i], &p[i]);

       begin = clock();

	   for(w=0;w<n;w++){
		   Ux = max(x[w]-d, 0);
		   Lx = min(x[w]+d, 1024);
		   Ly = max(y[w]-d, 0);
		   Ry = min(y[w]+d, 1024);

		   for(i=Ux; i<=Lx; i++){
			   for(j=Ly; j<=Ry; j++){
				   //place bomb and calculate damage and store
				   //max (abs(x2 - x1), abs (y2 - y1)) <= d
				   damage = 0;

				   for(k=0;k<n;k++){
						temp = max(abs(x[k] - i), abs(y[k] - j));
						if(temp <= d)
							damage = damage+ p[k];
				   }
				   //store the coordination of the bomb with the maximum damage
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

  end = clock();

  time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

  printf("Elapsed: %f seconds\n", time_spent);
   return 0;
}