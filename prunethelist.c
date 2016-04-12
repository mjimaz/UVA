#include <stdio.h>
#include <stdlib.h>

long int list1[10010], list2[10010];

int cmpfunc(const void *va, const void *vb){
	const long int *ia = va;
	const long int *ib = vb;

	if (*ia < *ib) return -1;
	else if (*ia > *ib) return +1;
	else return 0;
}

int main(){
	int testcases;
	int m, n,i,j, remove;

	long int t1,t2;

	scanf("%d",&testcases);

	while(1){
		if(testcases == 0)
			break;

		scanf("%d %d",&m, &n);

		for(i=0;i<m;i++)
			scanf("%d",&list1[i]);
		for(i=0;i<n;i++)
			scanf("%d",&list2[i]);

		qsort(list1, m, sizeof (long int), cmpfunc);
		qsort(list2, n, sizeof (long int), cmpfunc);

		i=0;
		j=0;
		remove=0;
		while(1){
			t1 = list1[i];
			t2 = list2[j];

			if(t1 > t2){
				remove++;
				j++;
			}else if(t1 < t2){
				remove++;
				i++;
			}else{
				i++;
				j++;
			}

			if(i == m){
				remove += (n-j);
				break;
			}else if(j == n){
				remove += (m-i);
				break;
			}
		}
		printf("%d\n",remove);


		testcases--;
	}

return 0;
}