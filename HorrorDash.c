#include <stdio.h>

int main(){
	int testcases, max, n, i, temp, cases=1;

	scanf("%d",&testcases);


	while(1){
		if(testcases == 0)
			break;
		max = 0;

		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&temp);

			if(temp > max)
				max = temp;
		}

		printf("Case %d: %d\n", cases, max);
		cases++;
		testcases--;
	}
	return 0;
}