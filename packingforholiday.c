#include <stdio.h>

int main(){
	int n, cases=1;
	int L, W, H;

	scanf("%d",&n);

	while(1){

		if(n == 0)
			break;

		scanf("%d %d %d",&L, &W, &H);


		if(L>20 || W>20 || H>20)
			printf("Case %d: bad\n",cases);
		else
			printf("Case %d: good\n",cases);

		n--;
		cases++;
	}
	return 0;
}