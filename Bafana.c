#include <stdio.h>

int main(){
	int testcases, n, k, p, cases=1, i;

	scanf("%d",&testcases);

	while(testcases-- > 0){
		scanf("%d %d %d",&n, &k, &p);

		printf("Case %d: ", cases++);

		while(p-- > 0){
				k++;
				if(k > n){
					k=1;
				}
		}
		printf("%d\n",k);

	}
	return 0;
}