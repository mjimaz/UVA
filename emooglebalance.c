#include <stdio.h>

int main(){
	int n, d, balance;
	int cases = 1;

	while(1){
		scanf("%d",&n);

		if(n == 0)
			break;

		balance = 0;
		while(1){
			if(n == 0)
			break;

			scanf("%d",&d);

			if(d == 0)
				balance--;
			else
				balance++;
			n--;
		}

		printf("Case %d: %d\n", cases, balance);
		cases++;
	}
	return 0;
}