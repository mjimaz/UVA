#include <stdio.h>

int main(){
	int testcases;
	int N,i;
	int players[12];
	int cases = 1;

	scanf("%d", &testcases);

	while(1){
		if(testcases == 0)
			break;
		scanf("%d",&N);
		i=0;

		while(1){
			if(i == N)
				break;

			scanf("%d", &players[i]);
			i++;
		}

	N = N/2;

	printf("Case %d: %d\n",cases,players[N]);
	cases++;
	testcases--;
	}
	return 0;
}