#include <stdio.h>

int main(){
	int x, y, z;
	int avg, total;
	int testcases;

	scanf("%d",&testcases);

	while(1){
		if(testcases == 0)
			break;
		scanf("%d %d %d",&x,&y, &z);

		printf("%d\n",z*(2*x-y)/(x+y));
		testcases--;
	}
return 0;
}