#include <stdio.h>

int main(){
	int n,k;
	int cig;
	int div, rem;
	while(scanf("%d %d",&n,&k) != EOF){
		cig = 0;
		while(n >= k){
			div = n/k;
			rem = n%k;
			cig += k*div;
			n = div + rem;
		}

		cig += n;

		printf("%d\n",cig);
	}
return 0;
}