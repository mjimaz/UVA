#include <stdio.h>

int main(){
	int n, m;
	int testcases, i;
	char c[55];

	scanf("%d",&testcases);
	gets(c);

	while(1){
		if(testcases == 0)
			break;

		scanf("%d %d",&n, &m);

		i = 0;
		while(1){
			if(i == n)
				break;

			i++;
		}

		testcases--;
	}
	return 0;
}