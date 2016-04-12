#include <stdio.h>

#define MAX 110

int main(){
	int n, i, moves, cases=1;
	int num[MAX], sum, avg;



	while(1){
		scanf("%d",&n);

		if(n == 0)
			break;

		i =0;
		sum = 0;
		moves = 0;

		while(1){
			if(i == n)
				break;
			scanf("%d",&num[i]);

			sum += num[i];

			i++;
		}
		avg = sum/n;

		while(1){
			i--;

			if(num[i]> avg)
				moves += (num[i] - avg);

			if(i == 0)
				break;
		}

		printf("Set #%d\nThe minimum number of moves is %d.\n\n",cases,moves);
		cases++;

	}
	return 0;
}