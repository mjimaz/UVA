#include <stdio.h>

int main(){

	unsigned long  n1, n2;

	while(scanf("%u %u",&n1, &n2) != EOF){
		printf("%u\n",n1^n2);
	}

	return 0;
}