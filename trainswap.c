#include <stdio.h>
#include <stdlib.h>

int main(){
	int testcases,l,i;
	int carriages[50];
	int swap, temp;
	int totalSwaps;

	scanf("%d",&testcases);
	while(testcases-- > 0){
		scanf("%d",&l);

		for(i=0;i<l;i++)
			scanf("%d",&carriages[i]);

		totalSwaps = 0;

		while(1){
			swap = 0;

			for(i=0;i<l-1;i++){
				if(carriages[i] > carriages[i+1]){
					temp = carriages[i];
					carriages[i] = carriages[i+1];
					carriages[i+1] = temp;
					totalSwaps++;
					swap = 1;
				}
			}

			if(swap == 0)
				break;
		}

		printf("Optimal train swapping takes %d swaps.\n",totalSwaps);


	}
return 0;
}