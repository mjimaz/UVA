#include <stdio.h>
#include <stdlib.h>

int main(){
	int age[101];
	int n, i;
	int t;

	while(1){
		scanf("%d",&n);

		if(n == 0)
			break;

		i = 1;

		while(1){
			age[i] = 0;
			if(i == 100)
				break;
			i++;
		}
		i = 0;

		while(1){
			if(i == n)
				break;
			scanf("%d",&t);
			age[t]++;
			i++;
		}

		i = 1;

		while(1){
			t = age[i];
			while(t > 0){
				t--;
				n--;
				if(n == 0)
					printf("%d",i);
				else
					printf("%d ",i);
			}
			if(n == 0)
				break;

			i++;
		}
		printf("\n");
	}
	return 0;
}