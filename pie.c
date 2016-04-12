#include <stdio.h>
#include <stdlib.h>

#define MAX 100001
#define pi 3.1415926535897932384626433832795

int cmpfunc(const void *va, const void *vb){
	const double *ia = va;
	const double *ib = vb;

	if (*ia < *ib) return +1;
	else if (*ia > *ib) return -1;
	else return 0;
}

int main(){
	int testcases;
	int N, F, r;
	int i, j, k, index;
	int* people = (int*) malloc(sizeof(int) * MAX);
	double* volume = (double*) malloc(sizeof(double) * MAX);
	double v, temp1, temp2;

	scanf("%d", &testcases);

	while(1){
		if(testcases == 0)
			break;

		scanf("%d %d", &N, &F);
		F++;

		i=0;

		while(1){
			if(i == N)
				break;

			scanf("%d", &r);
			volume[i] = r*r*pi;
			people[i] = 0;
			i++;
		}
		qsort(volume, N, sizeof (double), cmpfunc);

		if(N == 1){
			v = volume[0]/F;
		}else{

			i = 1;
			people[0] = 1;

			while(1){
				if(i == F)
					break;

				k = 0;
				j=1;
				index = 0;

				while(1){
					if(j == N){
						people[index]++;
						v = volume[index]/people[index];
						break;
					}

					temp1 = volume[k]/(people[k]+1);
					temp2 = volume[j]/(people[j]+1);

					printf("O i:%d t1 %.4f t2 %.4f\n",i,temp1,temp2);

					if(temp1 < temp2){
						printf("I i:%d t1 %.4f t2 %.4f\n",i,temp1,temp2);
						index = j;
						k = j;
					}


					j++;
				}
				i++;
			}
		}

		printf("%.4f\n",v);

		testcases--;
	}
	return 0;
}