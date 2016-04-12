#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void *va, const void *vb){
	const int *ia = va;
	const int *ib = vb;

	if (*ia < *ib) return 1;
	else if (*ia > *ib) return -1;
	else return 0;
}

int main(){
	int n,m,i,j;
	int* num = (int*) malloc(sizeof(int) * 1000);
	int* sum = (int*) malloc(sizeof(int) * 499500);
	int temp[50];
	int cases=1;
	int s,e, mid,x, y;
	int first, second;

	while(scanf("%d",&n) && n){
		for(i=0;i<n;i++)
			scanf("%d",&num[i]);

		scanf("%d",&m);


		for(i=0;i<m;i++)
			scanf("%d",&temp[i]);




		x=0;

		for(i=0;i<n-1;i++)
			for(j=i+1;j<n;j++){
				if(num[i] != num[j]){
					sum[x] = num[i]+num[j];
					x++;
				}
			}

		qsort(num, n, sizeof (int), cmpfunc);

		printf("Case %d:\n",cases);
		cases++;

		first = -1;
		second = -1;

		for(i=0;i<m;i++){
					s=0;
					while(s < n && temp[i] > sum[s]){
						s++;
					}

					if(s == 0)
						y = sum[0];
					else if(s == x)
						y = sum[s-1];
					else{
						if(sum[s] - temp[i] < temp[i] - sum[s-1])
							y=sum[s];
						else
							y=sum[s-1];

					}

					printf("Closest sum to %d is %d.\n", temp[i], y);
		}
	}
	return 0;
}