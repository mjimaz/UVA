#include <stdio.h>
#include <string.h>

int main(){
	long long x=1;
	long long y=2;
	long long z;
	int i;

	printf("%d, %d,",x,y);

	for(i =0;i<49;i++){
		z = x+y;
		printf("%ld,",z);
		x=y;
		y=z;
	}
	return 0;
}