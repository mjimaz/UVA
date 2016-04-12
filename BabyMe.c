#include <stdio.h>

int main(){
	int testcases, cases=1;
	int a,b;
	char c[100];

	scanf("%d",&testcases);

	getchar();

	while(1){
		if(testcases == 0)
			break;


		gets(c);

		printf("Case %d:", cases);
		cases++;
		testcases--;
	}
	return 0;
}