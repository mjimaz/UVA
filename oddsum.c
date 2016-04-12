#include <stdio.h>

int main(){
	int testcases;
	int a, b;
	int sum;
	int cases = 1;

	scanf("%d",&testcases);

	while(1){
		if(testcases == 0)
			break;

		sum=0;

		scanf("%d\n%d",&a,&b);

		if(a%2 == 0)
			a++;

		while(1){
			if(a > b)
				break;

			sum += a;
			a += 2;
		}

		printf("Case %d: %d\n", cases, sum);

		testcases--;
		cases++;
	}
	return 0;
}