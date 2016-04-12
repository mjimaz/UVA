#include <stdio.h>
#include <stdlib.h>

#define MAX 1000000

int minimum( int a, int b ){
	return (a < b ? a : b );
}


int cmpfunc(const void *va, const void *vb){
	const long int *ia = va;
	const long int *ib = vb;

	if (*ia < *ib) return -1;
	else if (*ia > *ib) return +1;
	else return 0;
}





int main(){
	int item;
	int *coin = malloc(sizeof *coin * MAX);
	int *no_coin = malloc(sizeof *no_coin * MAX);
	int *sum = malloc(sizeof *sum * MAX);
	int testcases;
	int n,i;
	//int max_item = 10000;
	int j,k,l;
	int denomination;
	int temp, start, end, coins;

	scanf("%d",&testcases);
	no_coin[0] = 0;
	sum[0]=0;

	while(1){
		if(testcases == 0)
			break;

		scanf("%d",&item);
		scanf("%d",&n);
		i=0;
		while(1){
			if(i == n)
				break;
			scanf("%d",&coin[i]);
			i++;
		}

		qsort(coin, n, sizeof (int), cmpfunc);
		/*
		int dp[30001];

		dp[0] = 0;
		for (int i=1; i<=30000; i++)
		    dp[i] = INFINITE;

		for each coin C do
		    for (int v = 30001 - C - 1; v >= 0; v--)
		        if (dp[v] < INFINITE)
            dp[v+C] = min(dp[v+C], dp[v]+1);

		*/
		for (i=1; i<=30000; i++)
		    no_coin[i] = MAX;

		for(i=0;i<n;i++){
			start = 30000-coin[i];
			for(j= start; j>=0;j--){
				if(no_coin[j] < MAX)
					no_coin[j+coin[i]] = minimum(no_coin[j+coin[i]], no_coin[j]+1);
			}
		}

		printf("answer %d\n",no_coin[item]);


		testcases--;
	}
	return 0;
}