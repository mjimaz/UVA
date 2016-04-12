#include <stdio.h>
int main(){

	long int i, j;

	while(scanf("%lld %lld", &i, &j) != EOF){
		if(j>i)
			printf("%lld\n", j-i);
		else
			printf("%lld\n", i-j);
	}
	return 0;
}