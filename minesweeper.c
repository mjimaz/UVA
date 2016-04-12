#include <stdio.h>
#include <stdlib.h>

#ifndef max
	#define max( a, b ) ( ((a) > (b)) ? (a) : (b) )
#endif

#ifndef min
	#define min( a, b ) ( ((a) < (b)) ? (a) : (b) )
#endif

int main(){
	int n, m, i, j, x, y, field=0 , go;
	int **a = malloc(sizeof *a * 128);
	int Ux, Lx, Ly, Ry;
	char ch;

	if (a){
		for (i = 0; i < 101; i++)
     		a[i] = malloc(sizeof *a[i] * 128);
	}

	scanf("%d %d",&n, &m);
	while(n != 0 && m !=0){
		if(field > 0)
			printf("\n");
		field++;

		for( i = 0 ;i < n ; i++)
			for( j = 0 ;j < m ; j++)
				a[i][j]=0;
		go=1;
		i=-1;
		j=-1;

			while(go == 1){
				scanf("%c",&ch);
				if(ch == '.'){
					j++;
				}else if(ch == '*'){
					a[i][j] = -1;

					Ux = max(i-1, 0);
					Lx = min(i+1, n);
					Ly = max(j-1, 0);
		   			Ry = min(j+1, m);


		   			for(x=Ux; x<=Lx; x++){
						for(y=Ly; y<=Ry; y++){
							if(a[x][y] != -1)
								a[x][y] = a[x][y]+1;
						}
					}
					j++;

				}else if(ch == '\n'){
					i++;
					j=0;
					if(i == n)
						go=0;;
				}
			}
		printf("Field #%d:\n",field);
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				if(a[i][j] == -1)
					printf("*");
				else
					printf("%d", a[i][j]);
			}
			printf("\n");
		}

		scanf("%d %d",&n, &m);


	}
	return 0;
}