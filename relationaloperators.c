#include <stdio.h>

#ifndef compare
	#define compare( a, b ) ( (a < b) ? -1 : (a > b) )
#endif

int main(){
	char c;
	int t, a, b;

	scanf("%d",&t);

	while(1){
		if(t == 0)
			break;

		scanf("%d %d",&a, &b);

		a = compare(a,b);

		if(a == 1)
			printf(">\n");
		else if(a == 0)
			printf("=\n");
		else
			printf("<\n");

		t--;
	}
	return 0;
}