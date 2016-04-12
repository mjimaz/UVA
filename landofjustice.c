#include <stdio.h>

int main(int argc, const char * argv[]){

	int n;

	while(1){
		scanf("%d", &n);
		if(n < 0)
			break;

		if(n==1)
			printf("0%\n");
		else
			printf("%.0f%\n", (double)n*25.0);
	}
	return 0;
}