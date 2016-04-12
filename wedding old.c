#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void *va, const void *vb){
	const int *ia = va;
	const int *ib = vb;

	if (*ia < *ib) return +1;
	else if (*ia > *ib) return -1;
	else return 0;
}

int budget (int *a, int *g, int *c,int i, int j, int n, int budget, int cost){
	int temp;
	if( i != 0)
		j = c[i]; //save last column to j

	if(a[i][j] >= budget){
		if(j == g[i] - 1) //reached last element
			return 0;
		else{
			j++;
			c[i] = j ;//save column location
		}
	}else{
		temp = a[i][j] + cost;
		if(temp > budget)
			if(j == g[i] - 1)//reached last element
				return 0;
			else{
				j++;
				c[i]=j;
			}
		else{
			cost = temp;
			if(i < n-1) //did not reach the last row
				i++;
			else
				return temp;
		}
	}
}

int main(){

   //int **a = malloc(sizeof (int) * 10);
   int* g = (int*) malloc(sizeof(int) * 10);
   int* c = (int*) malloc(sizeof(int) * 10);
   int i, j, scenario, money, n, loop;
   int temp, max =0, iteration, count, total;

   if (a)
   		for (i = 0; i < 10; i++)
     		a[i] = malloc(sizeof (int) * 10);

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
			for(j=1;j<n;j++)
				iteration = iteration*g[i];
			total = iteration*g[0];
			count = 0;
			i=-1;
			do{
				if(count % iteration == 0)
					i = i+1;

				temp = budget(a, g, c, 0, i, n, money, 0);//call function
				//int budget (int a[rows][cols], int g[rows], int c[rows],int i, int j, int n, int budget, int cost){

				if(temp > max)
					max = temp;
				//if moved to next column in row 0
				for(j=0;j<n;j++)
					c[j]=0;
			}while(++count < total);

			if(max == 0)
				printf("No solution");
			else
				printf("%d",max);
   }
   return 0;
}