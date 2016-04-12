#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void *va, const void *vb){
	const int *ia = va;
	const int *ib = vb;

	if (*ia < *ib) return -1;
	else if (*ia > *ib) return +1;
	else return 0;
}

int main(){
	int i, testcases;
	int stores, n;
	int locations[100];
	int distance;

	scanf("%d",&testcases);

	while(1){
		if(testcases == 0)
			break;

		i=0;

		scanf("%d",&stores);

		while(1){
			if(i == stores)
				break;

			scanf("%d",&locations[i]);

			i++;
		}

		qsort(locations, stores, sizeof(int), cmpfunc);

		i = 0;
		stores--;
		distance = 0;
		while(1){

			if(i == stores)
				break;

			distance += (locations[i+1] - locations[i]);
			i++;
		}
		distance *= 2;
		printf("%d\n", distance);

		testcases--;
	}
	return 0;
}