#include <stdio.h>

int main(){
	int n, b, i, temp;
	int balls[100] = {0};
	int index1, index2;
	int notfound;
	int testcase=0;

	while(1){
		scanf("%d %d",&n,&b);

		if(!(n||b))
			break;

		i=0;
		testcase++;

		while(i < b){
			scanf("%d",&temp);
			balls[temp] = testcase;
			i++;
		}
		if(b == n+1)
			printf("Y\n");
		else{
			if(balls[n] == 0 || balls[0] == 0)
				printf("N\n");
			else{
				i=1;
				while(i<=n){

					notfound = 1;
					index1 = i;
					index2 = index1 - i;

					while(1){
						if(index1 > n)
							break;

						if(balls[index1] == testcase && balls[index2] == testcase){
							notfound=0;
							break;
						}else{
							index1++;
							index2++;
						}
					}

					if(notfound == 1)
						break;

					i++;
				}
				if(notfound == 0)
					printf("Y\n");
				else
					printf("N\n");
			}
		}
	}
	return 0;
}