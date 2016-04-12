#include <stdio.h>

int main(){
	int n, i, j, flips, end;
	int numbers[1001];

	while(scanf("%d",&n) != EOF){
		i = 0;

		while(1){
			if(i == n)
				break;
			scanf("%d",&numbers[i]);
			i++;
		}

		i = 0;
		end = n - 1;
		flips = 0;

		while(1){
			if(i == end)
				break;
			j = i+1;
			while(1){
				if(j == n)
					break;
				if(numbers[i] > numbers[j])
					flips++;
				j++;
			}
			i++;
		}

		printf("Minimum exchange operations : %d\n",flips);
	}
	return 0;
}