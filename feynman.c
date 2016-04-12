#include <stdio.h>

int main(){
	int N;
	int total;
	while(scanf("%d", &N) != EOF && N != 0){
		total = 0;
		do{
			total += N*N;
			N--;
		}while(N>0);
		printf("%d\n",total);
	}
	return 0;
}