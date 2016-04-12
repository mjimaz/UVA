#include <stdio.h>

#ifndef max
	#define max( a, b ) ( ((a) > (b)) ? (a) : (b) )
#endif

int main(){
	int testcases, n, cases=1, temp, card;

	scanf("%d",&testcases);

	while(1){
		if(testcases == 0)
			break;

		scanf("%d",&n);

		card = 0;
		while(1){
			if(n == 0)
				break;

			scanf("%d",&temp);

			card = max(card, temp);

			n--;
		}

		printf("Case %d: %d\n",cases, card);
		cases++;
		testcases--;
	}
return 0;
}