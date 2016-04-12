#include <stdio.h>

int main(){
	int testcases;
	int n;
	char a, b, c;
	int c1, c2, c3;
	int total;
	char temp[10];

	scanf("%d",&testcases);

	while(1){
		if(testcases == 0)
			break;
		gets(temp);
		scanf("%c%c%c-%d",&a,&b,&c,&n);

		c1 = ((int)a - 65)*26*26;
		c2 = ((int)b - 65)*26;
		c3 = (int)c  - 65;

		total = c1+c2+c3;

		if(total > n)
			total = total - n;
		else
			total = n - total;

		if(total > 100 )
			printf("not nice\n");
		else
			printf("nice\n");

		testcases--;
	}

	return 0 ;
}