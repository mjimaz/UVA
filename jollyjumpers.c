#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, i;
	int num[3000];
	int temp1, temp2;
	int jolly;
	int diff;

	while(scanf("%d",&n) != EOF){
		for(i = 0 ;i<n;i++)
			num[i]=0;

		i = 0;
		jolly = 1;

		while(i < n){
			scanf("%d", &temp1);
			if(jolly == 1 && i > 0){
				if(temp1 > temp2)
					diff = temp1 - temp2;
				else
					diff = temp2 - temp1;

				if(num[diff] == 0 && diff > 0 && diff < n)
					num[diff] = 1;
				else
					jolly = 0;
			}
			i++;
			temp2 = temp1;
		}
		if(jolly == 1)
			printf("Jolly\n");
		else
			printf("Not jolly\n");

	}
	return 0;
}