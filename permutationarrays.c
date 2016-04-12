#include <stdio.h>
#include <stdlib.h>

#define MAX 10000

struct permutation{
	int input;
	char output[MAX];
};

int cmpfunc(const void *va, const void *vb){
	const struct permutation *ia = va;
	const struct permutation *ib = vb;

	if ((*ia).input < (*ib).input) return -1;
	else if ((*ia).input > (*ib).input) return +1;
	else return 0;
}

int main(){
	int n, i, j, testcases;
	char c;
	double f;
	struct permutation * a = (struct permutation*) malloc(sizeof(struct permutation) * MAX);
	int cases = 0;

	scanf("%d",&testcases);

	while(1){
		if(testcases == 0)
			break;

		i=0;
		if(cases == 1)
			printf("\n");

		cases = 1;

		while(1){
			scanf("%d%c",&n,&c);

			a[i].input = n;

			if(c == '\n')
				break;
			i++;
		}

		j = 0;

		while(1){
			scanf("%s%c",&a[j].output,&c);

			if(j == i)
				break;
			j++;
		}

		qsort(a, i+1, sizeof(struct permutation), cmpfunc);

		j = 0;
		while(1){
			printf("%s\n",a[j].output);

			if(j == i)
				break;
			j++;
		}

		testcases--;

	}
	return 0;
}