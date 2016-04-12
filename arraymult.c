#include <stdio.h>
#include <string.h>

#define MAX 15
#define INFINITY 2000000000

int s[MAX][MAX];
char optPar[100000];
int strIndex;

void print(int from, int to){
    if(from==to){
       optPar[strIndex] = 'A';
       strIndex++;
    }

    else{

      optPar[strIndex]='(';
      strIndex++;
      print(from,s[from][to]);
      optPar[strIndex] = ' ';
      strIndex++;
      optPar[strIndex] = 'x';
      strIndex++;
      optPar[strIndex] = ' ';
      strIndex++;
      print(s[from][to]+1,to);

      optPar[strIndex] = ')';
      strIndex++;
   }

}

int main(){
	int n, r;
	int i,j,k,L;
	int mult[MAX][MAX];
	int p[MAX];
	int q, m;
	int cases=1;

	while(1){
		scanf("%d",&n);

		if(n == 0)
			break;
		i=0;

		scanf("%d",&p[i]);
		r=0;

		while(1){
			if(i == n)
				break;
			if(r == 0){
				i++;
				scanf("%d",&p[i]);
				r=1;
			}else{
				scanf("%d",&j);
				r=0;
			}
		}
		for(i=1;i<=n;i++)
			mult[i][i] = 0;

		for(L=2;L<=n;L++)
			for(i=1;i<=n-L+1;i++){
				j = i + L -1;
				mult[i][j] = INFINITY;
				for(k = i;k<=j-1;k++){
					q = mult[i][k] + mult[k+1][j] + p[i-1]*p[k]*p[j];
					if (q < mult[i][j]) {
						mult[i][j] = q;
						s[i][j] = k;
					}
				}
		}
		strIndex = 0;
		print(1,n);
		j=1;
		n = strlen(optPar);

		printf("Case %d: ",cases++);
		for(i=0;i<n;i++){
			printf("%c",optPar[i]);
			if(optPar[i] == 'A')
				printf("%d",j++);
		}
		printf("\n");
	}
	return 0;
}