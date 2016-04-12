#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int **a, *g;

int cmpfunc(const void *va, const void *vb){
	const int *ia = va;
	const int *ib = vb;

	if (*ia < *ib) return +1;
	else if (*ia > *ib) return -1;
	else return 0;
}

//int budget (int **a[MAX][MAX], int *g[MAX],int n){
	int budget(int n, int i, int j, int max){
	//printf("n=%d, i=%d, j=%d\n",n,i,j);

				/**if(i < n){
					if(j < g[i]){
						printf("%d ",a[i][j]);
						j++;
						//budget(n, i, j);
					}
					else{
						i++;
						j=0;
						printf("\n");
					}
				budget(n, i, j);
				}*/
				//else return 0;
				if(j < g[i]){
					if(i == 0) //first row
						temp = a[i][j];

					else if(i == n-1){//reached last row
						temp = temp + a[i][j];
						if(temp > max){
							j++;
							budget(n, i, j, temp);
						}

						else{
							j++;
							budget(n, i, j, max);
						}

					}else{
						temp = temp + a[i][j];
						i++;
						budget(n, i, j, max);
					}

				}
	return 0;
}

int main(){

  // int **a = malloc(sizeof (int) * MAX);
  // int* g = (int*) malloc(sizeof(int) * MAX);
   int* c = (int*) malloc(sizeof(int) * MAX);
   int i, j, scenario, money, n, loop;
   int temp, max =0, iteration, count, total;

   a = malloc(sizeof (int) * MAX);
   g = (int*) malloc(sizeof(int) * MAX);

   if (a)
   		for (i = 0; i < MAX; i++)
     		a[i] = malloc(sizeof (int) * MAX);

	scanf("%d",&scenario);

	for(loop=0;loop<scenario;loop++){
			scanf("%d",&money);
		   	scanf("%d",&n);

			for(j=0;j<n;j++){
				//read number of garments in g
				scanf("%d",&g[j]);

				for(i=0;i<g[j];i++)
				   scanf("%d",&a[j][i]);
		    }
		    //sort each row
		    for(j=0;j<n;j++)
		    	qsort(a[j], g[j], sizeof (int), cmpfunc);
/*
printf("Print sorted elements\n");
		    //printing out elements
		    for(i=0;i<n;i++){
				for(j=0;j<g[i];j++)
					printf("%d ",a[i][j]);
				printf("\n");
			}*/

			//order element in array from highest to lowest
			//get best starting point which is the biggest difference between garment prices

			//max = budget(a, g, c, 0, i, n, money, 0);//call function
 budget(n,0,0);

 printf("end of function");

		/*	if(max == 0)
				printf("No solution");
			else
				printf("%d",max);*/
   }
   return 0;
}