#include <stdio.h>
#include <stdlib.h>

struct calls{
	long start;
	long end;
};

struct calls * call, * police;

int main(){
	int N, M;
	long C, I, S, D;
	int j, activeCalls, k;

	call = (struct calls*) malloc(sizeof(struct calls) * 10001);
	police = (struct calls*) malloc(sizeof(struct calls) * 10001);

	while(1){
		scanf("%d %d",&N, &M);

		if(N == 0 && M == 0)
			break;

		j=0;

		while(1){
			if(N == 0)
				break;
			scanf("%d %d %d %d",&C, &I, &S, &D);

			call[j].start = S;
			call[j].end = S+D;

			N--;
			j++;
		}

		N=j;
		j=0;

		while(1){
			if(M == 0)
				break;
			scanf("%d %d", &S, &D);

			police[j].start = S;
			police[j].end = S+D;

			M--;
			j++;
		}

		M=j;
		j=0;

		while(1){
			activeCalls = 0;
			if(j == M)
				break;

			for(k=0; k<N; k++){
				if(call[k].start >= police[j].start &&  call[k].start < police[j].end){
					activeCalls++;
				}else if(call[k].end > police[j].start &&  call[k].end <= police[j].end){
					activeCalls++;
				}else if(call[k].start <= police[j].start &&  call[k].end >= police[j].end){
					activeCalls++;
				}
			}
			j++;
			printf("%d\n",activeCalls);
		}
	}
	return 0;
}