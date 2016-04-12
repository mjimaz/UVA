#include <stdio.h>

int main(){
	int testcases, max, rank[10], i, cases=1;
	char url[10][100];

	scanf("%d",&testcases);


	while(1){
		if(testcases == 0)
			break;
		max = 0;

		for(i=0;i<10;i++){
			scanf("%s %d",&url[i], &rank[i]);

			if(rank[i] > max)
				max = rank[i];
		}

		printf("Case #%d:\n", cases);
		for(i=0;i<10;i++){
			if(rank[i] == max)
				printf("%s\n",url[i]);
		}

		cases++;
		testcases--;
	}
	return 0;
}