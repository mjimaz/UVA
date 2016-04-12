#include <stdio.h>
#include <stdlib.h>

#ifndef max
	#define max( a, b ) ( ((a) > (b)) ? (a) : (b) )
#endif

#ifndef min
	#define min( a, b ) ( ((a) < (b)) ? (a) : (b) )
#endif

int main(){
	int testcases, n,i,j,k,o,p;
	int Ux, Lx, Ly, Ry;
	char bombs[15][15];
	char temp[15][15];
	int game[15][15];
	int touchbomb;
	int cases=0;

	scanf("%d",&testcases);

	while(1){
		if(testcases == 0)
			break;
		if(cases != 0)
			printf("\n");

		cases++;

		i=0;
		scanf("%d",&n);
		while(1){
			if(n == 0)
				break;

			scanf("%s",&bombs[i]);

			n--;
			i++;
		}

		k=0;
		while(1){
			if(k == i)
				break;

			scanf("%s",&temp[k]);

			k++;
		}

		k=0;
		touchbomb = 0;
		while(1){
			if(k == i)
				break;
			for(j=0;j<i;j++){
				if(temp[k][j] == 'x'){
					if(bombs[k][j] == '*')
						touchbomb = 1;
					else{

						game[k][j]=0;

						Ux = max(k-1, 0);
						Lx = min(k+1, i-1);
						Ly = max(j-1, 0);
						Ry = min(j+1, i-1);

						for(o=Ux; o<=Lx; o++)
							for(p=Ly; p<=Ry; p++)
								if(bombs[o][p] == '*')
									game[k][j]++;
					}
				}

			}
			k++;
		}
		k=0;
		while(1){

			if(k == i)
				break;
			for(j=0;j<i;j++){
				if(bombs[k][j] == '.'){
					if(temp[k][j] == 'x')
						printf("%d",game[k][j]);
					else
						printf(".");
				}
				else if(bombs[k][j] == '*'){
					if(touchbomb == 1)
						printf("*");
					else
						printf(".");
				}
			}
			printf("\n");
			k++;
		}
		testcases--;
	}
	return 0;
}