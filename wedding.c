#include <stdio.h>
#include <stdlib.h>

#define MAX 10
#define false 0
#define true 1

int **a, *g;


int main(){
	int **a = malloc(sizeof (int) * MAX);
  	int* g = (int*) malloc(sizeof(int) * MAX);
   	int* c = (int*) malloc(sizeof(int) * MAX);
   	int i, j, scenario, money, n, loop;
   	int temp, max =0, iteration, count, total;
	int can_reach[210][25];

   	if (a)
   		for (i = 0; i < MAX; i++)
     		a[i] = malloc(sizeof (int) * MAX);

	scanf("%d",&scenario);

	while(1){
		if(scenario == 0)
			break;
		scenario--;

		scanf("%d",&money);
		scanf("%d",&n);

		for(j=0;j<n;j++){
			scanf("%d",&g[j]);

			for(i=0;i<g[j];i++)
			   scanf("%d",&a[j][i]);
		}

		memset(can_reach, false, sizeof can_reach);
		for (i = 0; i < g[0]; i++) // initial values
			can_reach[money - g[i]][0] = true;

		for (j = 0; j < n; j++) // for each remaining garment
		for (i = 0; i < money; i++) if (can_reach[i][j - 1]) // if can reach this state
		for (l = 1; l <= price[j][0]; l++) if (i - price[j][l] >= 0) // flag the rest
		can_reach[i - price[j][l]][j] = true; // as long as it is feasible
for (i = 0; i <= money && !can_reach[i][n - 1]; i++);

		if(max == 0)
				printf("No solution");
			else
				printf("%d",max);
   }
   return 0;
}